/*
 * cpuidle.c - core cpuidle infrastructure
 *
 * (C) 2006-2007 Venkatesh Pallipadi <venkatesh.pallipadi@intel.com>
 *               Shaohua Li <shaohua.li@intel.com>
 *               Adam Belay <abelay@novell.com>
 *
 * This code is licenced under the GPL.
 */

#include <linux/kernel.h>
#include <linux/mutex.h>
#include <linux/sched.h>
#include <linux/notifier.h>
#include <linux/pm_qos.h>
#include <linux/cpu.h>
#include <linux/cpuidle.h>
#include <linux/ktime.h>
#include <linux/hrtimer.h>
#include <linux/module.h>
#include <trace/events/power.h>

#include "cpuidle.h"

DEFINE_PER_CPU(struct cpuidle_device *, cpuidle_devices);
DEFINE_PER_CPU(struct cpuidle_device, cpuidle_dev);

DEFINE_MUTEX(cpuidle_lock);
LIST_HEAD(cpuidle_detected_devices);

static int enabled_devices;
static int off __read_mostly;
static int initialized __read_mostly;

int cpuidle_disabled(void)
{
	return off;
}
void disable_cpuidle(void)
{
	off = 1;
}

#if defined(CONFIG_ARCH_HAS_CPU_IDLE_WAIT)
static void cpuidle_kick_cpus(void)
{
	cpu_idle_wait();
}
#elif defined(CONFIG_SMP)
# error "Arch needs cpu_idle_wait() equivalent here"
#else 
static void cpuidle_kick_cpus(void) {}
#endif

static int __cpuidle_register_device(struct cpuidle_device *dev);

static inline int cpuidle_enter(struct cpuidle_device *dev,
				struct cpuidle_driver *drv, int index)
{
	struct cpuidle_state *target_state = &drv->states[index];
	return target_state->enter(dev, drv, index);
}

static inline int cpuidle_enter_tk(struct cpuidle_device *dev,
			       struct cpuidle_driver *drv, int index)
{
	return cpuidle_wrap_enter(dev, drv, index, cpuidle_enter);
}

typedef int (*cpuidle_enter_t)(struct cpuidle_device *dev,
			       struct cpuidle_driver *drv, int index);

static cpuidle_enter_t cpuidle_enter_ops;

int cpuidle_play_dead(void)
{
	struct cpuidle_device *dev = __this_cpu_read(cpuidle_devices);
	struct cpuidle_driver *drv = cpuidle_get_driver();
	int i, dead_state = -1;
	int power_usage = -1;

	if (!drv)
		return -ENODEV;

	
	for (i = CPUIDLE_DRIVER_STATE_START; i < drv->state_count; i++) {
		struct cpuidle_state *s = &drv->states[i];

		if (s->power_usage < power_usage && s->enter_dead) {
			power_usage = s->power_usage;
			dead_state = i;
		}
	}

	if (dead_state != -1)
		return drv->states[dead_state].enter_dead(dev, dead_state);

	return -ENODEV;
}

int cpuidle_enter_state(struct cpuidle_device *dev, struct cpuidle_driver *drv,
		int next_state)
{
	int entered_state;

	entered_state = cpuidle_enter_ops(dev, drv, next_state);

	if (entered_state >= 0) {
		
		dev->states_usage[entered_state].time +=
				(unsigned long long)dev->last_residency;
		dev->states_usage[entered_state].usage++;
	} else {
		dev->last_residency = 0;
	}

	return entered_state;
}

int cpuidle_idle_call(void)
{
	struct cpuidle_device *dev = __this_cpu_read(cpuidle_devices);
	struct cpuidle_driver *drv = cpuidle_get_driver();
	int next_state, entered_state;

	if (off)
		return -ENODEV;

	if (!initialized)
		return -ENODEV;

	
	if (!dev || !dev->enabled)
		return -EBUSY;

#if 0
	
	hrtimer_peek_ahead_timers();
#endif

	
	next_state = cpuidle_curr_governor->select(drv, dev);
	if (need_resched()) {
		local_irq_enable();
		return 0;
	}

	trace_power_start_rcuidle(POWER_CSTATE, next_state, dev->cpu);
	trace_cpu_idle_rcuidle(next_state, dev->cpu);

	if (need_resched()) {
		dev->last_residency = 0;
		local_irq_enable();
		entered_state = next_state;
		goto exit;
	}

	if (cpuidle_state_is_coupled(dev, drv, next_state))
		entered_state = cpuidle_enter_state_coupled(dev, drv,
							    next_state);
	else
		entered_state = cpuidle_enter_state(dev, drv, next_state);

	trace_power_end_rcuidle(dev->cpu);

exit:
	trace_cpu_idle_rcuidle(PWR_EVENT_EXIT, dev->cpu);

	
	if (cpuidle_curr_governor->reflect)
		cpuidle_curr_governor->reflect(dev, entered_state);

	return 0;
}

void cpuidle_install_idle_handler(void)
{
	if (enabled_devices) {
		
		smp_wmb();
		initialized = 1;
	}
}

void cpuidle_uninstall_idle_handler(void)
{
	if (enabled_devices) {
		initialized = 0;
		cpuidle_kick_cpus();
	}
}

void cpuidle_pause_and_lock(void)
{
	mutex_lock(&cpuidle_lock);
	cpuidle_uninstall_idle_handler();
}

EXPORT_SYMBOL_GPL(cpuidle_pause_and_lock);

void cpuidle_resume_and_unlock(void)
{
	cpuidle_install_idle_handler();
	mutex_unlock(&cpuidle_lock);
}

EXPORT_SYMBOL_GPL(cpuidle_resume_and_unlock);

int cpuidle_wrap_enter(struct cpuidle_device *dev,
				struct cpuidle_driver *drv, int index,
				int (*enter)(struct cpuidle_device *dev,
					struct cpuidle_driver *drv, int index))
{
	ktime_t time_start, time_end;
	s64 diff;

	time_start = ktime_get();

	index = enter(dev, drv, index);

	time_end = ktime_get();

	local_irq_enable();

	diff = ktime_to_us(ktime_sub(time_end, time_start));
	if (diff > INT_MAX)
		diff = INT_MAX;

	dev->last_residency = (int) diff;

	return index;
}

#ifdef CONFIG_ARCH_HAS_CPU_RELAX
static int poll_idle(struct cpuidle_device *dev,
		struct cpuidle_driver *drv, int index)
{
	ktime_t	t1, t2;
	s64 diff;

	t1 = ktime_get();
	local_irq_enable();
	while (!need_resched())
		cpu_relax();

	t2 = ktime_get();
	diff = ktime_to_us(ktime_sub(t2, t1));
	if (diff > INT_MAX)
		diff = INT_MAX;

	dev->last_residency = (int) diff;

	return index;
}

static void poll_idle_init(struct cpuidle_driver *drv)
{
	struct cpuidle_state *state = &drv->states[0];

	snprintf(state->name, CPUIDLE_NAME_LEN, "POLL");
	snprintf(state->desc, CPUIDLE_DESC_LEN, "CPUIDLE CORE POLL IDLE");
	state->exit_latency = 0;
	state->target_residency = 0;
	state->power_usage = -1;
	state->flags = 0;
	state->enter = poll_idle;
	state->disable = 0;
}
#else
static void poll_idle_init(struct cpuidle_driver *drv) {}
#endif 

int cpuidle_enable_device(struct cpuidle_device *dev)
{
	int ret, i;
	struct cpuidle_driver *drv = cpuidle_get_driver();

	if (dev->enabled)
		return 0;
	if (!drv || !cpuidle_curr_governor)
		return -EIO;
	if (!dev->state_count)
		dev->state_count = drv->state_count;

	if (dev->registered == 0) {
		ret = __cpuidle_register_device(dev);
		if (ret)
			return ret;
	}

	cpuidle_enter_ops = drv->en_core_tk_irqen ?
		cpuidle_enter_tk : cpuidle_enter;

	poll_idle_init(drv);

	if ((ret = cpuidle_add_state_sysfs(dev)))
		return ret;

	if (cpuidle_curr_governor->enable &&
	    (ret = cpuidle_curr_governor->enable(drv, dev)))
		goto fail_sysfs;

	for (i = 0; i < dev->state_count; i++) {
		dev->states_usage[i].usage = 0;
		dev->states_usage[i].time = 0;
	}
	dev->last_residency = 0;

	smp_wmb();

	dev->enabled = 1;

	enabled_devices++;
	return 0;

fail_sysfs:
	cpuidle_remove_state_sysfs(dev);

	return ret;
}

EXPORT_SYMBOL_GPL(cpuidle_enable_device);

void cpuidle_disable_device(struct cpuidle_device *dev)
{
	if (!dev->enabled)
		return;
	if (!cpuidle_get_driver() || !cpuidle_curr_governor)
		return;

	dev->enabled = 0;

	if (cpuidle_curr_governor->disable)
		cpuidle_curr_governor->disable(cpuidle_get_driver(), dev);

	cpuidle_remove_state_sysfs(dev);
	enabled_devices--;
}

EXPORT_SYMBOL_GPL(cpuidle_disable_device);

static int __cpuidle_register_device(struct cpuidle_device *dev)
{
	int ret;
	struct device *cpu_dev;
	struct cpuidle_driver *cpuidle_driver = cpuidle_get_driver();

	if (!dev)
		return -EINVAL;
	cpu_dev = get_cpu_device((unsigned long)dev->cpu);
	if (!cpu_dev)
		return -EINVAL;
	if (!try_module_get(cpuidle_driver->owner))
		return -EINVAL;

	init_completion(&dev->kobj_unregister);

	per_cpu(cpuidle_devices, dev->cpu) = dev;
	list_add(&dev->device_list, &cpuidle_detected_devices);
	ret = cpuidle_add_sysfs(cpu_dev);
	if (ret)
		goto err_sysfs;

	ret = cpuidle_coupled_register_device(dev);
	if (ret)
		goto err_coupled;

	dev->registered = 1;
	return 0;

err_coupled:
	cpuidle_remove_sysfs(cpu_dev);
	wait_for_completion(&dev->kobj_unregister);
err_sysfs:
	list_del(&dev->device_list);
	per_cpu(cpuidle_devices, dev->cpu) = NULL;
	module_put(cpuidle_driver->owner);
	return ret;
}

int cpuidle_register_device(struct cpuidle_device *dev)
{
	int ret;

	mutex_lock(&cpuidle_lock);

	if ((ret = __cpuidle_register_device(dev))) {
		mutex_unlock(&cpuidle_lock);
		return ret;
	}

	cpuidle_enable_device(dev);
	cpuidle_install_idle_handler();

	mutex_unlock(&cpuidle_lock);

	return 0;

}

EXPORT_SYMBOL_GPL(cpuidle_register_device);

void cpuidle_unregister_device(struct cpuidle_device *dev)
{
	struct device *cpu_dev;
	struct cpuidle_driver *cpuidle_driver = cpuidle_get_driver();

	if (!dev)
		return;
	cpu_dev = get_cpu_device((unsigned long)dev->cpu);
	if (!cpu_dev)
		return;
	if (dev->registered == 0)
		return;

	cpuidle_pause_and_lock();

	cpuidle_disable_device(dev);

	cpuidle_remove_sysfs(cpu_dev);
	list_del(&dev->device_list);
	wait_for_completion(&dev->kobj_unregister);
	per_cpu(cpuidle_devices, dev->cpu) = NULL;

	cpuidle_coupled_unregister_device(dev);

	cpuidle_resume_and_unlock();

	module_put(cpuidle_driver->owner);
}

EXPORT_SYMBOL_GPL(cpuidle_unregister_device);

void cpuidle_unregister(struct cpuidle_driver *drv)
{
	int cpu;
	struct cpuidle_device *device;

	for_each_possible_cpu(cpu) {
		device = &per_cpu(cpuidle_dev, cpu);
		cpuidle_unregister_device(device);
	}

	cpuidle_unregister_driver(drv);
}
EXPORT_SYMBOL_GPL(cpuidle_unregister);

int cpuidle_register(struct cpuidle_driver *drv,
		     const struct cpumask *const coupled_cpus)
{
	int ret, cpu;
	struct cpuidle_device *device;

	ret = cpuidle_register_driver(drv);
	if (ret) {
		pr_err("failed to register cpuidle driver\n");
		return ret;
	}

	for_each_possible_cpu(cpu) {
		device = &per_cpu(cpuidle_dev, cpu);
		device->cpu = cpu;

#ifdef CONFIG_ARCH_NEEDS_CPU_IDLE_COUPLED
		if (coupled_cpus)
			device->coupled_cpus = *coupled_cpus;
#endif
		ret = cpuidle_register_device(device);
		if (!ret)
			continue;

		pr_err("Failed to register cpuidle device for cpu%d\n", cpu);

		cpuidle_unregister(drv);
		break;
	}

	return ret;
}
EXPORT_SYMBOL_GPL(cpuidle_register);

#ifdef CONFIG_SMP

static void smp_callback(void *v)
{
	
}

static int cpuidle_latency_notify(struct notifier_block *b,
		unsigned long l, void *v)
{
	smp_call_function(smp_callback, NULL, 1);
	return NOTIFY_OK;
}

static struct notifier_block cpuidle_latency_notifier = {
	.notifier_call = cpuidle_latency_notify,
};

static inline void latency_notifier_init(struct notifier_block *n)
{
	pm_qos_add_notifier(PM_QOS_CPU_DMA_LATENCY, n);
}

#else 

#define latency_notifier_init(x) do { } while (0)

#endif 

static int __init cpuidle_init(void)
{
	int ret;

	if (cpuidle_disabled())
		return -ENODEV;

	ret = cpuidle_add_interface(cpu_subsys.dev_root);
	if (ret)
		return ret;

	latency_notifier_init(&cpuidle_latency_notifier);

	return 0;
}

module_param(off, int, 0444);
core_initcall(cpuidle_init);
