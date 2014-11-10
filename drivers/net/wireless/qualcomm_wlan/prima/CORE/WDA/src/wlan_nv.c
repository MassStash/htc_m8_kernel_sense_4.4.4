/*
 * Copyright (c) 2012-2013, The Linux Foundation. All rights reserved.
 *
 * Previously licensed under the ISC license by Qualcomm Atheros, Inc.
 *
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */
/*
 * Copyright (c) 2012, The Linux Foundation. All rights reserved.
 *
 * Previously licensed under the ISC license by Qualcomm Atheros, Inc.
 *
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */


#ifndef WLAN_NV_C
#define WLAN_NV_C

#include "wlan_nv2.h"
#include "wlan_hal_msg.h"

const sHalNv nvDefaults =
{
    {
        0,                                                              
        1,                                                              
        2,                                                              
        1,                                                              
        1,                                                              
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },                         
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },                         
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },                         
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },                         
        { "\0" },
        0,                                                              
        WLAN_NV_VERSION,                                                
    }, 

    {
        
        {
            
            
            
            
            {
                
                {1900},    
                {1900},    
                {1900},    
                {1900},    
                {1900},    
                {1900},    
                {1900},    

                
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1550},    

                
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1500},    
                
                
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1400},    
                {1300},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1500},    
                {1400},    
                {1300},     

                
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1500},    
                {1400},    
                {1300},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1500},    
                {1400},    
                {1300},    

#ifdef WLAN_FEATURE_11AC
                
               
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1500},    

               
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
#ifdef WCN_PRONTO
                {0000},    
#endif
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
#ifdef WCN_PRONTO
                {0000},    
#endif

               
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    

               
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
#endif
            },  
            
            {
                
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    

                
                {1600},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1600},    
                {1650},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1350},    
                {1200},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    
                {1600},    
                {1600},    
                {1500},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

#ifdef WLAN_FEATUURE_11AC
                
               
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1500},    

               
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
               
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    


               
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
#endif
            },  
            
            {
                
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    

                
                {1600},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1600},    
                {1650},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1350},    
                {1200},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    
                {1600},    
                {1600},    
                {1500},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

#ifdef WLAN_FEATUURE_111AC
                
               
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1500},    

               
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
               
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    


               
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
#endif
            },  
            
            {
                
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    

                
                {1600},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1600},    
                {1650},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1350},    
                {1200},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    
                {1600},    
                {1600},    
                {1500},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

#ifdef WLAN_FEATUURE_11AC
                
               
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1500},    

               
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
               
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    


               
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
#endif
            },  
            

            {
                
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    

                
                {1600},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1600},    
                {1650},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1350},    
                {1200},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    
                {1600},    
                {1600},    
                {1500},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

#ifdef WLAN_FEATUURE_11AC
                
               
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1500},    

               
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
               
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    


               
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
#endif
            },  
        },

        
        {
            
            
            
            
            

            
            
            
            
            
            

            


            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 22},           
                    {NV_CHANNEL_ENABLE, 22},           
                    {NV_CHANNEL_DISABLE, 30},           
                    {NV_CHANNEL_DISABLE, 30},           
                    {NV_CHANNEL_DISABLE, 30},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},             
                    {NV_CHANNEL_ENABLE, 17},             
                    {NV_CHANNEL_ENABLE, 17},             
                    {NV_CHANNEL_ENABLE, 17},             
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                

                    
                    {NV_CHANNEL_DFS, 22},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DISABLE, 0},             
                    {NV_CHANNEL_DISABLE, 0},             
                    {NV_CHANNEL_DISABLE, 0},             
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 23},            
#endif 

                    
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 0},             

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 23},            
#endif 
                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    {0},  
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 19},           
                    {NV_CHANNEL_ENABLE, 19},           
                    {NV_CHANNEL_DISABLE, 0},           

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 23},            
#endif 

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 23},            
#endif 

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    { 0 },  
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 18},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               

                    
                    {NV_CHANNEL_DFS, 22},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 0},                
                    {NV_CHANNEL_DFS, 0},                
                    {NV_CHANNEL_DFS, 0},                
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 23},            
#endif 

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 23},            
#endif 

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    { 0 },  
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                                       
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_DISABLE, 0},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               

                    
                    {NV_CHANNEL_DFS, 22},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 0},                
                    {NV_CHANNEL_DFS, 0},                
                    {NV_CHANNEL_DFS, 0},                
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 23},           
#endif 
                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    {0},   
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_DISABLE, 30},           
                    {NV_CHANNEL_DISABLE, 30},           
                    {NV_CHANNEL_DISABLE, 30},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            

                    
                    {NV_CHANNEL_DISABLE, 22},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 23},            
#endif 

                    
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 23},            
#endif 

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    { 0 },  
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            },   

            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_DISABLE, 0},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            

                    
                    {NV_CHANNEL_DISABLE, 22},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 23},            
#endif 

                    
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 23},            
#endif 

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    {0},   
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_DISABLE, 0},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            

                    
                    {NV_CHANNEL_DISABLE, 22},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 24},            
#endif 

                    
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 23},            
#endif 

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    {0},   
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_DISABLE, 0},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            

                    
                    {NV_CHANNEL_DISABLE, 22},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 24},            
#endif 

                    
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
#ifdef FEATURE_WLAN_CH144
                    {NV_CHANNEL_DISABLE, 23},            
#endif 

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    {0},   
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                                       
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_DISABLE, 0},           
                }, 

                {
                    {0},   
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            } 
        },

        
        {
            
            
            
            
            

            0,                  
            { 'U', 'S', 'I' }   
        },

        
        {
            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 2 , 2 , 3 , 3 , 4 , 5 , 5 , 6 , 7 , 8 , 8 , 9 , 10 , 10 , 11 , 13 , 14 , 15 , 17 ,
                    19 , 20 , 21 , 22 , 23 , 25 , 26 , 27 , 28 , 29 , 30 , 30 , 31 , 32 , 33 , 34 , 35 , 35 , 36 , 37 , 38 , 39 , 40 ,
                    40 , 41 , 42 , 43 , 44 , 44 , 45 , 45 , 46 , 46 , 47 , 48 , 48 , 49 , 49 , 50 , 50 , 51 , 51 , 52 , 52 , 53 , 53 ,
                    54 , 54 , 55 , 55 , 56 , 56 , 57 , 57 , 58 , 58 , 58 , 59 , 59 , 59 , 60 , 60 , 60 , 61 , 61 , 61 , 62 , 62 , 62 ,
                    63 , 63 , 63 , 64 , 64 , 65 , 65 , 65 , 66 , 66 , 66 , 67 , 67 , 67 , 68 , 68 , 68 , 69 , 69 , 69 , 69 , 70 , 70 ,
                    70 , 70 , 71 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 74 , 75 , 75 , 75 , 75 , 75 , 76 ,
                    76 , 76 , 76 , 76 , 77 , 77 , 77 , 77 , 78 , 78 , 78 , 78 , 78 , 79 , 79 , 79 , 79 , 80 , 80 , 80 , 80 , 80 , 81 ,
                    81 , 81 , 81 , 82 , 82 , 82 , 82 , 82 , 82 , 83 , 83 , 83 , 83 , 83 , 84 , 84 , 84 , 84 , 84 , 84 , 85 , 85 , 85 ,
                    85 , 85 , 85 , 86 , 86 , 86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 88 , 88 , 89 ,
                    89 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 90 , 90 , 90 , 91 , 91 , 91 , 91 , 91 , 91 , 92 , 92 , 92 , 92 , 92 ,
                    92 , 92 , 93 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 95 , 95 , 96 , 96
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 2 , 2 , 3 , 3 , 4 , 5 , 5 , 6 , 7 , 8 , 8 , 9 , 10 , 10 , 11 , 13 , 14 , 15 , 17 ,
                    19 , 20 , 21 , 22 , 23 , 25 , 26 , 27 , 28 , 29 , 30 , 30 , 31 , 32 , 33 , 34 , 35 , 35 , 36 , 37 , 38 , 39 , 40 ,
                    40 , 41 , 42 , 43 , 44 , 44 , 45 , 45 , 46 , 46 , 47 , 48 , 48 , 49 , 49 , 50 , 50 , 51 , 51 , 52 , 52 , 53 , 53 ,
                    54 , 54 , 55 , 55 , 56 , 56 , 57 , 57 , 58 , 58 , 58 , 59 , 59 , 59 , 60 , 60 , 60 , 61 , 61 , 61 , 62 , 62 , 62 ,
                    63 , 63 , 63 , 64 , 64 , 65 , 65 , 65 , 66 , 66 , 66 , 67 , 67 , 67 , 68 , 68 , 68 , 69 , 69 , 69 , 69 , 70 , 70 ,
                    70 , 70 , 71 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 74 , 75 , 75 , 75 , 75 , 75 , 76 ,
                    76 , 76 , 76 , 76 , 77 , 77 , 77 , 77 , 78 , 78 , 78 , 78 , 78 , 79 , 79 , 79 , 79 , 80 , 80 , 80 , 80 , 80 , 81 ,
                    81 , 81 , 81 , 82 , 82 , 82 , 82 , 82 , 82 , 83 , 83 , 83 , 83 , 83 , 84 , 84 , 84 , 84 , 84 , 84 , 85 , 85 , 85 ,
                    85 , 85 , 85 , 86 , 86 , 86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 88 , 88 , 89 ,
                    89 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 90 , 90 , 90 , 91 , 91 , 91 , 91 , 91 , 91 , 92 , 92 , 92 , 92 , 92 ,
                    92 , 92 , 93 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 95 , 95 , 96 , 96
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 2 , 2 , 3 , 3 , 4 , 5 , 5 , 6 , 7 , 8 , 8 , 9 , 10 , 10 , 11 , 13 , 14 , 15 , 17 ,
                    19 , 20 , 21 , 22 , 23 , 25 , 26 , 27 , 28 , 29 , 30 , 30 , 31 , 32 , 33 , 34 , 35 , 35 , 36 , 37 , 38 , 39 , 40 ,
                    40 , 41 , 42 , 43 , 44 , 44 , 45 , 45 , 46 , 46 , 47 , 48 , 48 , 49 , 49 , 50 , 50 , 51 , 51 , 52 , 52 , 53 , 53 ,
                    54 , 54 , 55 , 55 , 56 , 56 , 57 , 57 , 58 , 58 , 58 , 59 , 59 , 59 , 60 , 60 , 60 , 61 , 61 , 61 , 62 , 62 , 62 ,
                    63 , 63 , 63 , 64 , 64 , 65 , 65 , 65 , 66 , 66 , 66 , 67 , 67 , 67 , 68 , 68 , 68 , 69 , 69 , 69 , 69 , 70 , 70 ,
                    70 , 70 , 71 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 74 , 75 , 75 , 75 , 75 , 75 , 76 ,
                    76 , 76 , 76 , 76 , 77 , 77 , 77 , 77 , 78 , 78 , 78 , 78 , 78 , 79 , 79 , 79 , 79 , 80 , 80 , 80 , 80 , 80 , 81 ,
                    81 , 81 , 81 , 82 , 82 , 82 , 82 , 82 , 82 , 83 , 83 , 83 , 83 , 83 , 84 , 84 , 84 , 84 , 84 , 84 , 85 , 85 , 85 ,
                    85 , 85 , 85 , 86 , 86 , 86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 88 , 88 , 89 ,
                    89 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 90 , 90 , 90 , 91 , 91 , 91 , 91 , 91 , 91 , 92 , 92 , 92 , 92 , 92 ,
                    92 , 92 , 93 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 95 , 95 , 96 , 96
                }
            }, 

            
            {
                {
                    10 , 10 , 11 , 12 , 12 , 13 , 14 , 15 , 15 , 16 , 17 , 17 , 18 , 19 , 20 , 20 , 22 , 23 , 25 , 26 , 28 , 29 , 31 ,
                    33 , 34 , 36 , 37 , 38 , 40 , 41 , 42 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 52 , 53 , 54 , 55 , 55 , 56 ,
                    57 , 57 , 58 , 59 , 59 , 60 , 61 , 61 , 62 , 62 , 63 , 64 , 64 , 65 , 66 , 66 , 67 , 67 , 68 , 68 , 69 , 69 , 70 ,
                    70 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 75 , 75 , 76 , 76 , 76 , 77 , 77 , 77 , 78 ,
                    78 , 78 , 79 , 79 , 79 , 80 , 80 , 80 , 81 , 81 , 81 , 82 , 82 , 82 , 83 , 83 , 83 , 84 , 84 , 84 , 85 , 85 , 85 ,
                    86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 91 , 91 ,
                    91 , 91 , 91 , 92 , 92 , 92 , 92 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 96 , 96 , 96 ,
                    96 , 97 , 97 , 97 , 97 , 97 , 98 , 98 , 98 , 98 , 98 , 98 , 98 , 99 , 99 , 99 , 99 , 99 , 99 , 100 , 100 , 100 ,
                    100 , 101 , 101 , 101 , 101 , 101 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 103 , 103 , 103 , 103 ,
                    103 , 103 , 104 , 104 , 104 , 104 , 104 , 105 , 105 , 105 , 105 , 105 , 106 , 106 , 106 , 106 , 106 , 106 , 107 ,
                    107 , 107 , 107 , 107 , 107 , 107 , 108 , 108 , 108 , 108 , 108 , 108 , 109 , 109 , 109 , 109 , 109 , 109 , 109 ,
                    110 , 110 , 110 , 110 , 110 , 110 , 110 , 110 , 111 , 111 , 111 , 111 , 111 , 112 , 112 , 112
                }
            }, 

            
            {
                {
                    10 , 10 , 11 , 12 , 12 , 13 , 14 , 15 , 15 , 16 , 17 , 17 , 18 , 19 , 20 , 20 , 22 , 23 , 25 , 26 , 28 , 29 , 31 ,
                    33 , 34 , 36 , 37 , 38 , 40 , 41 , 42 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 52 , 53 , 54 , 55 , 55 , 56 ,
                    57 , 57 , 58 , 59 , 59 , 60 , 61 , 61 , 62 , 62 , 63 , 64 , 64 , 65 , 66 , 66 , 67 , 67 , 68 , 68 , 69 , 69 , 70 ,
                    70 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 75 , 75 , 76 , 76 , 76 , 77 , 77 , 77 , 78 ,
                    78 , 78 , 79 , 79 , 79 , 80 , 80 , 80 , 81 , 81 , 81 , 82 , 82 , 82 , 83 , 83 , 83 , 84 , 84 , 84 , 85 , 85 , 85 ,
                    86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 91 , 91 ,
                    91 , 91 , 91 , 92 , 92 , 92 , 92 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 96 , 96 , 96 ,
                    96 , 97 , 97 , 97 , 97 , 97 , 98 , 98 , 98 , 98 , 98 , 98 , 98 , 99 , 99 , 99 , 99 , 99 , 99 , 100 , 100 , 100 ,
                    100 , 101 , 101 , 101 , 101 , 101 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 103 , 103 , 103 , 103 ,
                    103 , 103 , 104 , 104 , 104 , 104 , 104 , 105 , 105 , 105 , 105 , 105 , 106 , 106 , 106 , 106 , 106 , 106 , 107 ,
                    107 , 107 , 107 , 107 , 107 , 107 , 108 , 108 , 108 , 108 , 108 , 108 , 109 , 109 , 109 , 109 , 109 , 109 , 109 ,
                    110 , 110 , 110 , 110 , 110 , 110 , 110 , 110 , 111 , 111 , 111 , 111 , 111 , 112 , 112 , 112
                }
            }, 

            
            {
                {
                    10 , 10 , 11 , 12 , 12 , 13 , 14 , 15 , 15 , 16 , 17 , 17 , 18 , 19 , 20 , 20 , 22 , 23 , 25 , 26 , 28 , 29 , 31 ,
                    33 , 34 , 36 , 37 , 38 , 40 , 41 , 42 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 52 , 53 , 54 , 55 , 55 , 56 ,
                    57 , 57 , 58 , 59 , 59 , 60 , 61 , 61 , 62 , 62 , 63 , 64 , 64 , 65 , 66 , 66 , 67 , 67 , 68 , 68 , 69 , 69 , 70 ,
                    70 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 75 , 75 , 76 , 76 , 76 , 77 , 77 , 77 , 78 ,
                    78 , 78 , 79 , 79 , 79 , 80 , 80 , 80 , 81 , 81 , 81 , 82 , 82 , 82 , 83 , 83 , 83 , 84 , 84 , 84 , 85 , 85 , 85 ,
                    86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 91 , 91 ,
                    91 , 91 , 91 , 92 , 92 , 92 , 92 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 96 , 96 , 96 ,
                    96 , 97 , 97 , 97 , 97 , 97 , 98 , 98 , 98 , 98 , 98 , 98 , 98 , 99 , 99 , 99 , 99 , 99 , 99 , 100 , 100 , 100 ,
                    100 , 101 , 101 , 101 , 101 , 101 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 103 , 103 , 103 , 103 ,
                    103 , 103 , 104 , 104 , 104 , 104 , 104 , 105 , 105 , 105 , 105 , 105 , 106 , 106 , 106 , 106 , 106 , 106 , 107 ,
                    107 , 107 , 107 , 107 , 107 , 107 , 108 , 108 , 108 , 108 , 108 , 108 , 109 , 109 , 109 , 109 , 109 , 109 , 109 ,
                    110 , 110 , 110 , 110 , 110 , 110 , 110 , 110 , 111 , 111 , 111 , 111 , 111 , 112 , 112 , 112
             }
           }, 

            
            {
                {
                    10 , 10 , 11 , 12 , 12 , 13 , 14 , 15 , 15 , 16 , 17 , 17 , 18 , 19 , 20 , 20 , 22 , 23 , 25 , 26 , 28 , 29 , 31 ,
                    33 , 34 , 36 , 37 , 38 , 40 , 41 , 42 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 52 , 53 , 54 , 55 , 55 , 56 ,
                    57 , 57 , 58 , 59 , 59 , 60 , 61 , 61 , 62 , 62 , 63 , 64 , 64 , 65 , 66 , 66 , 67 , 67 , 68 , 68 , 69 , 69 , 70 ,
                    70 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 75 , 75 , 76 , 76 , 76 , 77 , 77 , 77 , 78 ,
                    78 , 78 , 79 , 79 , 79 , 80 , 80 , 80 , 81 , 81 , 81 , 82 , 82 , 82 , 83 , 83 , 83 , 84 , 84 , 84 , 85 , 85 , 85 ,
                    86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 91 , 91 ,
                    91 , 91 , 91 , 92 , 92 , 92 , 92 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 96 , 96 , 96 ,
                    96 , 97 , 97 , 97 , 97 , 97 , 98 , 98 , 98 , 98 , 98 , 98 , 98 , 99 , 99 , 99 , 99 , 99 , 99 , 100 , 100 , 100 ,
                    100 , 101 , 101 , 101 , 101 , 101 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 103 , 103 , 103 , 103 ,
                    103 , 103 , 104 , 104 , 104 , 104 , 104 , 105 , 105 , 105 , 105 , 105 , 106 , 106 , 106 , 106 , 106 , 106 , 107 ,
                    107 , 107 , 107 , 107 , 107 , 107 , 108 , 108 , 108 , 108 , 108 , 108 , 109 , 109 , 109 , 109 , 109 , 109 , 109 ,
                    110 , 110 , 110 , 110 , 110 , 110 , 110 , 110 , 111 , 111 , 111 , 111 , 111 , 112 , 112 , 112
                }
            }, 

            
            {
                {
                    10 , 10 , 11 , 12 , 12 , 13 , 14 , 15 , 15 , 16 , 17 , 17 , 18 , 19 , 20 , 20 , 22 , 23 , 25 , 26 , 28 , 29 , 31 ,
                    33 , 34 , 36 , 37 , 38 , 40 , 41 , 42 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 52 , 53 , 54 , 55 , 55 , 56 ,
                    57 , 57 , 58 , 59 , 59 , 60 , 61 , 61 , 62 , 62 , 63 , 64 , 64 , 65 , 66 , 66 , 67 , 67 , 68 , 68 , 69 , 69 , 70 ,
                    70 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 75 , 75 , 76 , 76 , 76 , 77 , 77 , 77 , 78 ,
                    78 , 78 , 79 , 79 , 79 , 80 , 80 , 80 , 81 , 81 , 81 , 82 , 82 , 82 , 83 , 83 , 83 , 84 , 84 , 84 , 85 , 85 , 85 ,
                    86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 91 , 91 ,
                    91 , 91 , 91 , 92 , 92 , 92 , 92 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 96 , 96 , 96 ,
                    96 , 97 , 97 , 97 , 97 , 97 , 98 , 98 , 98 , 98 , 98 , 98 , 98 , 99 , 99 , 99 , 99 , 99 , 99 , 100 , 100 , 100 ,
                    100 , 101 , 101 , 101 , 101 , 101 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 103 , 103 , 103 , 103 ,
                    103 , 103 , 104 , 104 , 104 , 104 , 104 , 105 , 105 , 105 , 105 , 105 , 106 , 106 , 106 , 106 , 106 , 106 , 107 ,
                    107 , 107 , 107 , 107 , 107 , 107 , 108 , 108 , 108 , 108 , 108 , 108 , 109 , 109 , 109 , 109 , 109 , 109 , 109 ,
                    110 , 110 , 110 , 110 , 110 , 110 , 110 , 110 , 111 , 111 , 111 , 111 , 111 , 112 , 112 , 112
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 2 , 2 , 3 , 5 , 6 , 7 , 9 , 10 , 11 , 13 ,
                    14 , 15 , 16 , 17 , 18 , 20 , 21 , 22 , 22 , 23 , 23 , 24 , 24 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 28 , 29 , 29 ,
                    30 , 30 , 31 , 31 , 32 , 32 , 33 , 33 , 34 , 34 , 35 , 36 , 36 , 37 , 37 , 38 , 38 , 39 , 39 , 40 , 40 , 41 , 41 ,
                    42 , 42 , 43 , 43 , 44 , 44 , 45 , 45 , 46 , 46 , 47 , 47 , 47 , 48 , 48 , 49 , 49 , 49 , 50 , 50 , 50 , 51 , 51 ,
                    51 , 51 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 56 , 56 , 56 , 57 , 57 , 57 , 57 , 58 ,
                    58 , 58 , 59 , 59 , 59 , 59 , 60 , 60 , 60 , 60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 ,
                    64 , 64 , 64 , 64 , 65 , 65 , 65 , 65 , 65 , 66 , 66 , 66 , 66 , 67 , 67 , 67 , 67 , 67 , 68 , 68 , 68 , 68 , 69 ,
                    69 , 69 , 69 , 70 , 70 , 70 , 70 , 70 , 71 , 71 , 71 , 71 , 71 , 72 , 72 , 72 , 72 , 72 , 72 , 73 , 73 , 73 , 73 ,
                    73 , 73 , 74 , 74 , 74 , 74 , 74 , 74 , 75 , 75 , 75 , 75 , 75 , 75 , 76 , 76 , 76 , 76 , 76 , 76 , 76 , 77 , 77 ,
                    77 , 77 , 77 , 77 , 78 , 78 , 78 , 78 , 78 , 78 , 78 , 79 , 79 , 79 , 79 , 79 , 79 , 80 , 80 , 80 , 80 , 80 , 80 ,
                    81 , 81 , 81 , 81 , 81 , 81 , 81 , 82 , 82 , 82 , 82 , 82 , 82 , 83 , 83 , 83 , 83 , 84 , 84 , 85 , 85
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 2 , 2 , 3 , 5 , 6 , 7 , 9 , 10 , 11 , 13 ,
                    14 , 15 , 16 , 17 , 18 , 20 , 21 , 22 , 22 , 23 , 23 , 24 , 24 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 28 , 29 , 29 ,
                    30 , 30 , 31 , 31 , 32 , 32 , 33 , 33 , 34 , 34 , 35 , 36 , 36 , 37 , 37 , 38 , 38 , 39 , 39 , 40 , 40 , 41 , 41 ,
                    42 , 42 , 43 , 43 , 44 , 44 , 45 , 45 , 46 , 46 , 47 , 47 , 47 , 48 , 48 , 49 , 49 , 49 , 50 , 50 , 50 , 51 , 51 ,
                    51 , 51 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 56 , 56 , 56 , 57 , 57 , 57 , 57 , 58 ,
                    58 , 58 , 59 , 59 , 59 , 59 , 60 , 60 , 60 , 60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 ,
                    64 , 64 , 64 , 64 , 65 , 65 , 65 , 65 , 65 , 66 , 66 , 66 , 66 , 67 , 67 , 67 , 67 , 67 , 68 , 68 , 68 , 68 , 69 ,
                    69 , 69 , 69 , 70 , 70 , 70 , 70 , 70 , 71 , 71 , 71 , 71 , 71 , 72 , 72 , 72 , 72 , 72 , 72 , 73 , 73 , 73 , 73 ,
                    73 , 73 , 74 , 74 , 74 , 74 , 74 , 74 , 75 , 75 , 75 , 75 , 75 , 75 , 76 , 76 , 76 , 76 , 76 , 76 , 76 , 77 , 77 ,
                    77 , 77 , 77 , 77 , 78 , 78 , 78 , 78 , 78 , 78 , 78 , 79 , 79 , 79 , 79 , 79 , 79 , 80 , 80 , 80 , 80 , 80 , 80 ,
                    81 , 81 , 81 , 81 , 81 , 81 , 81 , 82 , 82 , 82 , 82 , 82 , 82 , 83 , 83 , 83 , 83 , 84 , 84 , 85 , 85
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 2 , 2 , 3 , 5 , 6 , 7 , 9 , 10 , 11 , 13 ,
                    14 , 15 , 16 , 17 , 18 , 20 , 21 , 22 , 22 , 23 , 23 , 24 , 24 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 28 , 29 , 29 ,
                    30 , 30 , 31 , 31 , 32 , 32 , 33 , 33 , 34 , 34 , 35 , 36 , 36 , 37 , 37 , 38 , 38 , 39 , 39 , 40 , 40 , 41 , 41 ,
                    42 , 42 , 43 , 43 , 44 , 44 , 45 , 45 , 46 , 46 , 47 , 47 , 47 , 48 , 48 , 49 , 49 , 49 , 50 , 50 , 50 , 51 , 51 ,
                    51 , 51 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 56 , 56 , 56 , 57 , 57 , 57 , 57 , 58 ,
                    58 , 58 , 59 , 59 , 59 , 59 , 60 , 60 , 60 , 60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 ,
                    64 , 64 , 64 , 64 , 65 , 65 , 65 , 65 , 65 , 66 , 66 , 66 , 66 , 67 , 67 , 67 , 67 , 67 , 68 , 68 , 68 , 68 , 69 ,
                    69 , 69 , 69 , 70 , 70 , 70 , 70 , 70 , 71 , 71 , 71 , 71 , 71 , 72 , 72 , 72 , 72 , 72 , 72 , 73 , 73 , 73 , 73 ,
                    73 , 73 , 74 , 74 , 74 , 74 , 74 , 74 , 75 , 75 , 75 , 75 , 75 , 75 , 76 , 76 , 76 , 76 , 76 , 76 , 76 , 77 , 77 ,
                    77 , 77 , 77 , 77 , 78 , 78 , 78 , 78 , 78 , 78 , 78 , 79 , 79 , 79 , 79 , 79 , 79 , 80 , 80 , 80 , 80 , 80 , 80 ,
                    81 , 81 , 81 , 81 , 81 , 81 , 81 , 82 , 82 , 82 , 82 , 82 , 82 , 83 , 83 , 83 , 83 , 84 , 84 , 85 , 85
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 2 , 2 , 3 , 5 , 6 , 7 , 9 , 10 , 11 , 13 ,
                    14 , 15 , 16 , 17 , 18 , 20 , 21 , 22 , 22 , 23 , 23 , 24 , 24 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 28 , 29 , 29 ,
                    30 , 30 , 31 , 31 , 32 , 32 , 33 , 33 , 34 , 34 , 35 , 36 , 36 , 37 , 37 , 38 , 38 , 39 , 39 , 40 , 40 , 41 , 41 ,
                    42 , 42 , 43 , 43 , 44 , 44 , 45 , 45 , 46 , 46 , 47 , 47 , 47 , 48 , 48 , 49 , 49 , 49 , 50 , 50 , 50 , 51 , 51 ,
                    51 , 51 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 56 , 56 , 56 , 57 , 57 , 57 , 57 , 58 ,
                    58 , 58 , 59 , 59 , 59 , 59 , 60 , 60 , 60 , 60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 ,
                    64 , 64 , 64 , 64 , 65 , 65 , 65 , 65 , 65 , 66 , 66 , 66 , 66 , 67 , 67 , 67 , 67 , 67 , 68 , 68 , 68 , 68 , 69 ,
                    69 , 69 , 69 , 70 , 70 , 70 , 70 , 70 , 71 , 71 , 71 , 71 , 71 , 72 , 72 , 72 , 72 , 72 , 72 , 73 , 73 , 73 , 73 ,
                    73 , 73 , 74 , 74 , 74 , 74 , 74 , 74 , 75 , 75 , 75 , 75 , 75 , 75 , 76 , 76 , 76 , 76 , 76 , 76 , 76 , 77 , 77 ,
                    77 , 77 , 77 , 77 , 78 , 78 , 78 , 78 , 78 , 78 , 78 , 79 , 79 , 79 , 79 , 79 , 79 , 80 , 80 , 80 , 80 , 80 , 80 ,
                    81 , 81 , 81 , 81 , 81 , 81 , 81 , 82 , 82 , 82 , 82 , 82 , 82 , 83 , 83 , 83 , 83 , 84 , 84 , 85 , 85
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 2 , 2 , 3 , 5 , 6 , 7 , 9 , 10 , 11 , 13 ,
                    14 , 15 , 16 , 17 , 18 , 20 , 21 , 22 , 22 , 23 , 23 , 24 , 24 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 28 , 29 , 29 ,
                    30 , 30 , 31 , 31 , 32 , 32 , 33 , 33 , 34 , 34 , 35 , 36 , 36 , 37 , 37 , 38 , 38 , 39 , 39 , 40 , 40 , 41 , 41 ,
                    42 , 42 , 43 , 43 , 44 , 44 , 45 , 45 , 46 , 46 , 47 , 47 , 47 , 48 , 48 , 49 , 49 , 49 , 50 , 50 , 50 , 51 , 51 ,
                    51 , 51 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 56 , 56 , 56 , 57 , 57 , 57 , 57 , 58 ,
                    58 , 58 , 59 , 59 , 59 , 59 , 60 , 60 , 60 , 60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 ,
                    64 , 64 , 64 , 64 , 65 , 65 , 65 , 65 , 65 , 66 , 66 , 66 , 66 , 67 , 67 , 67 , 67 , 67 , 68 , 68 , 68 , 68 , 69 ,
                    69 , 69 , 69 , 70 , 70 , 70 , 70 , 70 , 71 , 71 , 71 , 71 , 71 , 72 , 72 , 72 , 72 , 72 , 72 , 73 , 73 , 73 , 73 ,
                    73 , 73 , 74 , 74 , 74 , 74 , 74 , 74 , 75 , 75 , 75 , 75 , 75 , 75 , 76 , 76 , 76 , 76 , 76 , 76 , 76 , 77 , 77 ,
                    77 , 77 , 77 , 77 , 78 , 78 , 78 , 78 , 78 , 78 , 78 , 79 , 79 , 79 , 79 , 79 , 79 , 80 , 80 , 80 , 80 , 80 , 80 ,
                    81 , 81 , 81 , 81 , 81 , 81 , 81 , 82 , 82 , 82 , 82 , 82 , 82 , 83 , 83 , 83 , 83 , 84 , 84 , 85 , 85
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 2 , 2 , 3 , 5 , 6 , 7 , 9 , 10 , 11 , 13 ,
                    14 , 15 , 16 , 17 , 18 , 20 , 21 , 22 , 22 , 23 , 23 , 24 , 24 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 28 , 29 , 29 ,
                    30 , 30 , 31 , 31 , 32 , 32 , 33 , 33 , 34 , 34 , 35 , 36 , 36 , 37 , 37 , 38 , 38 , 39 , 39 , 40 , 40 , 41 , 41 ,
                    42 , 42 , 43 , 43 , 44 , 44 , 45 , 45 , 46 , 46 , 47 , 47 , 47 , 48 , 48 , 49 , 49 , 49 , 50 , 50 , 50 , 51 , 51 ,
                    51 , 51 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 56 , 56 , 56 , 57 , 57 , 57 , 57 , 58 ,
                    58 , 58 , 59 , 59 , 59 , 59 , 60 , 60 , 60 , 60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 ,
                    64 , 64 , 64 , 64 , 65 , 65 , 65 , 65 , 65 , 66 , 66 , 66 , 66 , 67 , 67 , 67 , 67 , 67 , 68 , 68 , 68 , 68 , 69 ,
                    69 , 69 , 69 , 70 , 70 , 70 , 70 , 70 , 71 , 71 , 71 , 71 , 71 , 72 , 72 , 72 , 72 , 72 , 72 , 73 , 73 , 73 , 73 ,
                    73 , 73 , 74 , 74 , 74 , 74 , 74 , 74 , 75 , 75 , 75 , 75 , 75 , 75 , 76 , 76 , 76 , 76 , 76 , 76 , 76 , 77 , 77 ,
                    77 , 77 , 77 , 77 , 78 , 78 , 78 , 78 , 78 , 78 , 78 , 79 , 79 , 79 , 79 , 79 , 79 , 80 , 80 , 80 , 80 , 80 , 80 ,
                    81 , 81 , 81 , 81 , 81 , 81 , 81 , 82 , 82 , 82 , 82 , 82 , 82 , 83 , 83 , 83 , 83 , 84 , 84 , 85 , 85
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    0 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

           
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

           
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

#ifdef FEATURE_WLAN_CH144
            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 
#endif 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 2 , 2 , 3 , 3 , 4 , 5 , 5 , 6 , 7 , 8 , 8 , 9 , 10 , 10 , 11 , 13 , 14 , 15 , 17 ,
                    19 , 20 , 21 , 22 , 23 , 25 , 26 , 27 , 28 , 29 , 30 , 30 , 31 , 32 , 33 , 34 , 35 , 35 , 36 , 37 , 38 , 39 , 40 ,
                    40 , 41 , 42 , 43 , 44 , 44 , 45 , 45 , 46 , 46 , 47 , 48 , 48 , 49 , 49 , 50 , 50 , 51 , 51 , 52 , 52 , 53 , 53 ,
                    54 , 54 , 55 , 55 , 56 , 56 , 57 , 57 , 58 , 58 , 58 , 59 , 59 , 59 , 60 , 60 , 60 , 61 , 61 , 61 , 62 , 62 , 62 ,
                    63 , 63 , 63 , 64 , 64 , 65 , 65 , 65 , 66 , 66 , 66 , 67 , 67 , 67 , 68 , 68 , 68 , 69 , 69 , 69 , 69 , 70 , 70 ,
                    70 , 70 , 71 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 74 , 75 , 75 , 75 , 75 , 75 , 76 ,
                    76 , 76 , 76 , 76 , 77 , 77 , 77 , 77 , 78 , 78 , 78 , 78 , 78 , 79 , 79 , 79 , 79 , 80 , 80 , 80 , 80 , 80 , 81 ,
                    81 , 81 , 81 , 82 , 82 , 82 , 82 , 82 , 82 , 83 , 83 , 83 , 83 , 83 , 84 , 84 , 84 , 84 , 84 , 84 , 85 , 85 , 85 ,
                    85 , 85 , 85 , 86 , 86 , 86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 88 , 88 , 89 ,
                    89 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 90 , 90 , 90 , 91 , 91 , 91 , 91 , 91 , 91 , 92 , 92 , 92 , 92 , 92 ,
                    92 , 92 , 93 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 95 , 95 , 96 , 96
                }
            }, 

            
            {
                {
                    10 , 10 , 11 , 12 , 12 , 13 , 14 , 15 , 15 , 16 , 17 , 17 , 18 , 19 , 20 , 20 , 22 , 23 , 25 , 26 , 28 , 29 , 31 ,
                    33 , 34 , 36 , 37 , 38 , 40 , 41 , 42 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 52 , 53 , 54 , 55 , 55 , 56 ,
                    57 , 57 , 58 , 59 , 59 , 60 , 61 , 61 , 62 , 62 , 63 , 64 , 64 , 65 , 66 , 66 , 67 , 67 , 68 , 68 , 69 , 69 , 70 ,
                    70 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 75 , 75 , 76 , 76 , 76 , 77 , 77 , 77 , 78 ,
                    78 , 78 , 79 , 79 , 79 , 80 , 80 , 80 , 81 , 81 , 81 , 82 , 82 , 82 , 83 , 83 , 83 , 84 , 84 , 84 , 85 , 85 , 85 ,
                    86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 91 , 91 ,
                    91 , 91 , 91 , 92 , 92 , 92 , 92 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 96 , 96 , 96 ,
                    96 , 97 , 97 , 97 , 97 , 97 , 98 , 98 , 98 , 98 , 98 , 98 , 98 , 99 , 99 , 99 , 99 , 99 , 99 , 100 , 100 , 100 ,
                    100 , 101 , 101 , 101 , 101 , 101 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 103 , 103 , 103 , 103 ,
                    103 , 103 , 104 , 104 , 104 , 104 , 104 , 105 , 105 , 105 , 105 , 105 , 106 , 106 , 106 , 106 , 106 , 106 , 107 ,
                    107 , 107 , 107 , 107 , 107 , 107 , 108 , 108 , 108 , 108 , 108 , 108 , 109 , 109 , 109 , 109 , 109 , 109 , 109 ,
                    110 , 110 , 110 , 110 , 110 , 110 , 110 , 110 , 111 , 111 , 111 , 111 , 111 , 112 , 112 , 112
                }
            }, 

            
            {
                {
                    10 , 10 , 11 , 12 , 12 , 13 , 14 , 15 , 15 , 16 , 17 , 17 , 18 , 19 , 20 , 20 , 22 , 23 , 25 , 26 , 28 , 29 , 31 ,
                     33 , 34 , 36 , 37 , 38 , 40 , 41 , 42 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 52 , 53 , 54 , 55 , 55 , 56 ,
                    57 , 57 , 58 , 59 , 59 , 60 , 61 , 61 , 62 , 62 , 63 , 64 , 64 , 65 , 66 , 66 , 67 , 67 , 68 , 68 , 69 , 69 , 70 ,
                    70 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 75 , 75 , 76 , 76 , 76 , 77 , 77 , 77 , 78 ,
                    78 , 78 , 79 , 79 , 79 , 80 , 80 , 80 , 81 , 81 , 81 , 82 , 82 , 82 , 83 , 83 , 83 , 84 , 84 , 84 , 85 , 85 , 85 ,
                    86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 91 , 91 ,
                    91 , 91 , 91 , 92 , 92 , 92 , 92 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 96 , 96 , 96 ,
                    96 , 97 , 97 , 97 , 97 , 97 , 98 , 98 , 98 , 98 , 98 , 98 , 98 , 99 , 99 , 99 , 99 , 99 , 99 , 100 , 100 , 100 ,
                    100 , 101 , 101 , 101 , 101 , 101 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 103 , 103 , 103 , 103 ,
                    103 , 103 , 104 , 104 , 104 , 104 , 104 , 105 , 105 , 105 , 105 , 105 , 106 , 106 , 106 , 106 , 106 , 106 , 107 ,
                    107 , 107 , 107 , 107 , 107 , 107 , 108 , 108 , 108 , 108 , 108 , 108 , 109 , 109 , 109 , 109 , 109 , 109 , 109 ,
                    110 , 110 , 110 , 110 , 110 , 110 , 110 , 110 , 111 , 111 , 111 , 111 , 111 , 112 , 112 , 112
                }
            }, 

            
            {
                {
                    10 , 10 , 11 , 12 , 12 , 13 , 14 , 15 , 15 , 16 , 17 , 17 , 18 , 19 , 20 , 20 , 22 , 23 , 25 , 26 , 28 , 29 , 31 ,
                    33 , 34 , 36 , 37 , 38 , 40 , 41 , 42 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 52 , 53 , 54 , 55 , 55 , 56 ,
                    57 , 57 , 58 , 59 , 59 , 60 , 61 , 61 , 62 , 62 , 63 , 64 , 64 , 65 , 66 , 66 , 67 , 67 , 68 , 68 , 69 , 69 , 70 ,
                    70 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 75 , 75 , 76 , 76 , 76 , 77 , 77 , 77 , 78 ,
                    78 , 78 , 79 , 79 , 79 , 80 , 80 , 80 , 81 , 81 , 81 , 82 , 82 , 82 , 83 , 83 , 83 , 84 , 84 , 84 , 85 , 85 , 85 ,
                     86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 91 , 91 ,
                    91 , 91 , 91 , 92 , 92 , 92 , 92 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 96 , 96 , 96 ,
                    96 , 97 , 97 , 97 , 97 , 97 , 98 , 98 , 98 , 98 , 98 , 98 , 98 , 99 , 99 , 99 , 99 , 99 , 99 , 100 , 100 , 100 ,
                    100 , 101 , 101 , 101 , 101 , 101 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 103 , 103 , 103 , 103 ,
                    103 , 103 , 104 , 104 , 104 , 104 , 104 , 105 , 105 , 105 , 105 , 105 , 106 , 106 , 106 , 106 , 106 , 106 , 107 ,
                    107 , 107 , 107 , 107 , 107 , 107 , 108 , 108 , 108 , 108 , 108 , 108 , 109 , 109 , 109 , 109 , 109 , 109 , 109 ,
                    110 , 110 , 110 , 110 , 110 , 110 , 110 , 110 , 111 , 111 , 111 , 111 , 111 , 112 , 112 , 112
                }
            }, 

            
            {
                {
                    10 , 10 , 11 , 12 , 12 , 13 , 14 , 15 , 15 , 16 , 17 , 17 , 18 , 19 , 20 , 20 , 22 , 23 , 25 , 26 , 28 , 29 , 31 ,
                    33 , 34 , 36 , 37 , 38 , 40 , 41 , 42 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 52 , 53 , 54 , 55 , 55 , 56 ,
                    57 , 57 , 58 , 59 , 59 , 60 , 61 , 61 , 62 , 62 , 63 , 64 , 64 , 65 , 66 , 66 , 67 , 67 , 68 , 68 , 69 , 69 , 70 ,
                    70 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 75 , 75 , 76 , 76 , 76 , 77 , 77 , 77 , 78 ,
                    78 , 78 , 79 , 79 , 79 , 80 , 80 , 80 , 81 , 81 , 81 , 82 , 82 , 82 , 83 , 83 , 83 , 84 , 84 , 84 , 85 , 85 , 85 ,
                    86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 91 , 91 ,
                    91 , 91 , 91 , 92 , 92 , 92 , 92 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 96 , 96 , 96 ,
                    96 , 97 , 97 , 97 , 97 , 97 , 98 , 98 , 98 , 98 , 98 , 98 , 98 , 99 , 99 , 99 , 99 , 99 , 99 , 100 , 100 , 100 ,
                    100 , 101 , 101 , 101 , 101 , 101 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 103 , 103 , 103 , 103 ,
                    103 , 103 , 104 , 104 , 104 , 104 , 104 , 105 , 105 , 105 , 105 , 105 , 106 , 106 , 106 , 106 , 106 , 106 , 107 ,
                    107 , 107 , 107 , 107 , 107 , 107 , 108 , 108 , 108 , 108 , 108 , 108 , 109 , 109 , 109 , 109 , 109 , 109 , 109 ,
                    110 , 110 , 110 , 110 , 110 , 110 , 110 , 110 , 111 , 111 , 111 , 111 , 111 , 112 , 112 , 112
                }
            }, 

            
            {
                {
                    10 , 10 , 11 , 12 , 12 , 13 , 14 , 15 , 15 , 16 , 17 , 17 , 18 , 19 , 20 , 20 , 22 , 23 , 25 , 26 , 28 , 29 , 31 ,
                    33 , 34 , 36 , 37 , 38 , 40 , 41 , 42 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 52 , 53 , 54 , 55 , 55 , 56 ,
                    57 , 57 , 58 , 59 , 59 , 60 , 61 , 61 , 62 , 62 , 63 , 64 , 64 , 65 , 66 , 66 , 67 , 67 , 68 , 68 , 69 , 69 , 70 ,
                    70 , 71 , 71 , 71 , 72 , 72 , 72 , 73 , 73 , 73 , 73 , 74 , 74 , 74 , 75 , 75 , 76 , 76 , 76 , 77 , 77 , 77 , 78 ,
                    78 , 78 , 79 , 79 , 79 , 80 , 80 , 80 , 81 , 81 , 81 , 82 , 82 , 82 , 83 , 83 , 83 , 84 , 84 , 84 , 85 , 85 , 85 ,
                    86 , 86 , 86 , 86 , 87 , 87 , 87 , 87 , 88 , 88 , 88 , 88 , 88 , 89 , 89 , 89 , 89 , 90 , 90 , 90 , 90 , 91 , 91 ,
                    91 , 91 , 91 , 92 , 92 , 92 , 92 , 93 , 93 , 93 , 93 , 93 , 94 , 94 , 94 , 94 , 95 , 95 , 95 , 95 , 96 , 96 , 96 ,
                    96 , 97 , 97 , 97 , 97 , 97 , 98 , 98 , 98 , 98 , 98 , 98 , 98 , 99 , 99 , 99 , 99 , 99 , 99 , 100 , 100 , 100 ,
                    100 , 101 , 101 , 101 , 101 , 101 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 103 , 103 , 103 , 103 ,
                    103 , 103 , 104 , 104 , 104 , 104 , 104 , 105 , 105 , 105 , 105 , 105 , 106 , 106 , 106 , 106 , 106 , 106 , 107 ,
                    107 , 107 , 107 , 107 , 107 , 107 , 108 , 108 , 108 , 108 , 108 , 108 , 109 , 109 , 109 , 109 , 109 , 109 , 109 ,
                    110 , 110 , 110 , 110 , 110 , 110 , 110 , 110 , 111 , 111 , 111 , 111 , 111 , 112 , 112 , 112
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 2 , 2 , 3 , 5 , 6 , 7 , 9 , 10 , 11 , 13 ,
                    14 , 15 , 16 , 17 , 18 , 20 , 21 , 22 , 22 , 23 , 23 , 24 , 24 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 28 , 29 , 29 ,
                    30 , 30 , 31 , 31 , 32 , 32 , 33 , 33 , 34 , 34 , 35 , 36 , 36 , 37 , 37 , 38 , 38 , 39 , 39 , 40 , 40 , 41 , 41 ,
                    42 , 42 , 43 , 43 , 44 , 44 , 45 , 45 , 46 , 46 , 47 , 47 , 47 , 48 , 48 , 49 , 49 , 49 , 50 , 50 , 50 , 51 , 51 ,
                    51 , 51 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 56 , 56 , 56 , 57 , 57 , 57 , 57 , 58 ,
                    58 , 58 , 59 , 59 , 59 , 59 , 60 , 60 , 60 , 60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 ,
                    64 , 64 , 64 , 64 , 65 , 65 , 65 , 65 , 65 , 66 , 66 , 66 , 66 , 67 , 67 , 67 , 67 , 67 , 68 , 68 , 68 , 68 , 69 ,
                    69 , 69 , 69 , 70 , 70 , 70 , 70 , 70 , 71 , 71 , 71 , 71 , 71 , 72 , 72 , 72 , 72 , 72 , 72 , 73 , 73 , 73 , 73 ,
                    73 , 73 , 74 , 74 , 74 , 74 , 74 , 74 , 75 , 75 , 75 , 75 , 75 , 75 , 76 , 76 , 76 , 76 , 76 , 76 , 76 , 77 , 77 ,
                    77 , 77 , 77 , 77 , 78 , 78 , 78 , 78 , 78 , 78 , 78 , 79 , 79 , 79 , 79 , 79 , 79 , 80 , 80 , 80 , 80 , 80 , 80 ,
                    81 , 81 , 81 , 81 , 81 , 81 , 81 , 82 , 82 , 82 , 82 , 82 , 82 , 83 , 83 , 83 , 83 , 84 , 84 , 85 , 85
                    }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 2 , 2 , 3 , 5 , 6 , 7 , 9 , 10 , 11 , 13 ,
                    14 , 15 , 16 , 17 , 18 , 20 , 21 , 22 , 22 , 23 , 23 , 24 , 24 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 28 , 29 , 29 ,
                    30 , 30 , 31 , 31 , 32 , 32 , 33 , 33 , 34 , 34 , 35 , 36 , 36 , 37 , 37 , 38 , 38 , 39 , 39 , 40 , 40 , 41 , 41 ,
                    42 , 42 , 43 , 43 , 44 , 44 , 45 , 45 , 46 , 46 , 47 , 47 , 47 , 48 , 48 , 49 , 49 , 49 , 50 , 50 , 50 , 51 , 51 ,
                    51 , 51 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 56 , 56 , 56 , 57 , 57 , 57 , 57 , 58 ,
                    58 , 58 , 59 , 59 , 59 , 59 , 60 , 60 , 60 , 60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 ,
                    64 , 64 , 64 , 64 , 65 , 65 , 65 , 65 , 65 , 66 , 66 , 66 , 66 , 67 , 67 , 67 , 67 , 67 , 68 , 68 , 68 , 68 , 69 ,
                    69 , 69 , 69 , 70 , 70 , 70 , 70 , 70 , 71 , 71 , 71 , 71 , 71 , 72 , 72 , 72 , 72 , 72 , 72 , 73 , 73 , 73 , 73 ,
                    73 , 73 , 74 , 74 , 74 , 74 , 74 , 74 , 75 , 75 , 75 , 75 , 75 , 75 , 76 , 76 , 76 , 76 , 76 , 76 , 76 , 77 , 77 ,
                    77 , 77 , 77 , 77 , 78 , 78 , 78 , 78 , 78 , 78 , 78 , 79 , 79 , 79 , 79 , 79 , 79 , 80 , 80 , 80 , 80 , 80 , 80 ,
                    81 , 81 , 81 , 81 , 81 , 81 , 81 , 82 , 82 , 82 , 82 , 82 , 82 , 83 , 83 , 83 , 83 , 84 , 84 , 85 , 85
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 2 , 2 , 3 , 5 , 6 , 7 , 9 , 10 , 11 , 13 ,
                    14 , 15 , 16 , 17 , 18 , 20 , 21 , 22 , 22 , 23 , 23 , 24 , 24 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 28 , 29 , 29 ,
                    30 , 30 , 31 , 31 , 32 , 32 , 33 , 33 , 34 , 34 , 35 , 36 , 36 , 37 , 37 , 38 , 38 , 39 , 39 , 40 , 40 , 41 , 41 ,
                    42 , 42 , 43 , 43 , 44 , 44 , 45 , 45 , 46 , 46 , 47 , 47 , 47 , 48 , 48 , 49 , 49 , 49 , 50 , 50 , 50 , 51 , 51 ,
                    51 , 51 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 56 , 56 , 56 , 57 , 57 , 57 , 57 , 58 ,
                    58 , 58 , 59 , 59 , 59 , 59 , 60 , 60 , 60 , 60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 ,
                    64 , 64 , 64 , 64 , 65 , 65 , 65 , 65 , 65 , 66 , 66 , 66 , 66 , 67 , 67 , 67 , 67 , 67 , 68 , 68 , 68 , 68 , 69 ,
                    69 , 69 , 69 , 70 , 70 , 70 , 70 , 70 , 71 , 71 , 71 , 71 , 71 , 72 , 72 , 72 , 72 , 72 , 72 , 73 , 73 , 73 , 73 ,
                    73 , 73 , 74 , 74 , 74 , 74 , 74 , 74 , 75 , 75 , 75 , 75 , 75 , 75 , 76 , 76 , 76 , 76 , 76 , 76 , 76 , 77 , 77 ,
                    77 , 77 , 77 , 77 , 78 , 78 , 78 , 78 , 78 , 78 , 78 , 79 , 79 , 79 , 79 , 79 , 79 , 80 , 80 , 80 , 80 , 80 , 80 ,
                    81 , 81 , 81 , 81 , 81 , 81 , 81 , 82 , 82 , 82 , 82 , 82 , 82 , 83 , 83 , 83 , 83 , 84 , 84 , 85 , 85
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6,
                    6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 12 ,
                    12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 16 , 16 , 16 , 17 , 17 , 17 , 18 , 18 , 18 , 19 , 19 ,
                    19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 23 , 24 , 24 , 24 , 24 , 25 , 25 , 25 , 25 , 26 ,
                    26 , 26 , 26 , 27 , 27 , 27 , 27 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 31 , 31 , 31 ,
                    31 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 ,
                    37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 ,
                    40 , 40 , 41 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 ,
                    44 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 ,
                    48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 ,
                    51 , 52 , 52 , 52 , 52 , 52 , 53 , 53 , 53 , 54 , 55 , 56 , 57 , 57 , 58 , 59 , 60
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    0 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    0 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    0 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    0 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    0 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    0 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    0 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

#ifdef FEATURE_WLAN_CH144
            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 
#endif 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 

            
            {
                {
                    4 , 4 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 11 , 11,
                    11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 13 , 13 , 14 , 14 , 14 , 15 , 15 , 15 , 15 , 15 , 16 , 16 , 16 , 16,
                    16 , 16 , 17 , 17 , 18 , 18 , 18 , 19 , 19 , 19 , 20 , 20 , 20 , 21 , 21 , 21 , 22 , 22 , 22 , 23 , 23 , 23 , 24,
                    24 , 24 , 25 , 25 , 25 , 26 , 26 , 26 , 27 , 27 , 27 , 28 , 28 , 28 , 29 , 29 , 29 , 30 , 30 , 30 , 31 , 31 , 31,
                    31 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 37 , 37 , 37,
                    37 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 , 43 , 43,
                    43 , 43 , 44 , 44 , 44 , 45 , 45 , 45 , 45 , 45 , 46 , 46 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 , 48 , 48,
                    48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 51 , 51 , 51 , 51 , 51 , 52 , 52 , 52 , 52,
                    52 , 52 , 53 , 53 , 53 , 53 , 53 , 53 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56,
                    56 , 56 , 56 , 57 , 57 , 57 , 57 , 57 , 57 , 58 , 58 , 58 , 58 , 58 , 58 , 59 , 59 , 59 , 59 , 59 , 59 , 60 , 60,
                    60 , 61 , 61 , 61 , 61 , 62 , 62 , 62 , 62 , 62 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 65 , 66 , 66
                }
            }, 
        },

        
        {
            98,    
            101,   
            101,   
            100,   
            98,    
            97,    
            94,    
            94,    
            92,    
            90,    
            94,    
            95,    
            97,    
            104,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
#ifdef FEATURE_WLAN_CH144
            100,   
#endif 
            100,   
            100,   
            100,   
            100,   
            100,   
            
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
#ifdef FEATURE_WLAN_CH144
            100,   
#endif 
            100,   
            100,   
            100,   
            100,   
        },

        
        
        
        
        {
            
            {
                
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
            },
            
            {
                
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
            },
            
            {
                
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
            },
            
            {
                
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
            },
            
            {
                
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
            }
        },

#if 0 
        
        {
            0x7FFF,      
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            { 0x00, 0x00 },        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x7FFF,      
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x7FFF,        
            0x7FFF,        

            { 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }  
            },        

            { 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }  
            },        

            { 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }  
            },        

            { 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                },  
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }  
            },        

            {
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }  
            }        

        }, 
#endif
        
        {
            0,   
            0,   
            0,   
            0,   

            0,   
            0,   
            0,   
            0,   

            0,   
            0,   
            0,   
            0,   

            0,   
            0,   
            0,   
            1,   

            1,   
            1,   
            1,   
            1,   

            0,   
            0,   
            0,   
        },


        
        {
            
            {
                
                {
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
#ifdef FEATURE_WLAN_CH144
                    180,    
#endif 
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
#ifdef FEATURE_WLAN_CH144
                    180,    
#endif 
                    180,    
                    180,    
                    180,    
                    180,    
                },

                
                {
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
#ifdef FEATURE_WLAN_CH144
                    180,    
#endif 
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    240,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
                    180,    
#ifdef FEATURE_WLAN_CH144
                    180,    
#endif 
                    180,    
                    180,    
                    180,    
                    180,    
                },
            },
            
            {
                
                {0},   

                
                {0}    
            }
        },

        
        {
            0x0,             
            {
                1400,        
                1400,        

                1600,        
                0,           
                0,           
                0,           

                0x1B,        
                0xFF,        

                0,           
                0,           
                0,           
                0,           
                0,           
                0,           
                0,           
                0,           
                0,           
            }
        },


        
        {
            280,  
            270,  
            270,  
            270,  
            270,  
            270,  
            280,  
            280,  
            290,  
            300,  
            300,  
            310,  
            310,  
            310,   
            280,  
            280,  
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
#ifdef FEATURE_WLAN_CH144
            280,   
#endif 
            280,   
            280,   
            280,   
            280,   
            280,   
            
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
#ifdef FEATURE_WLAN_CH144
            280,   
#endif 
            280,   
            280,   
            280,   
            280,   
        },

        
        {
            { 2150 }, 
            { 1850 }, 
            { 1750 }  
        },

        
        {
            0, 0
        },

        
        {
            0
        }

    } 
};

const sHalNvV2 nvDefaultsV2 =
{
    {
        0,                                                              
        1,                                                              
        2,                                                              
        1,                                                              
        1,                                                              
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },                         
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },                         
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },                         
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },                         
        { "\0" },
        0,                                                              
        WLAN_NV_VERSION,                                                
    }, 

    {
        
        {
            
            
            
            
            {
                
                {1900},    
                {1900},    
                {1900},    
                {1900},    
                {1900},    
                {1900},    
                {1900},    

                
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1550},    

                
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1500},    

                
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1400},    
                {1300},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1500},    
                {1400},    
                {1300},     

                
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1500},    
                {1400},    
                {1300},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1500},    
                {1400},    
                {1300},    

#ifdef WLAN_FEATURE_11AC
                
               
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1500},    

               
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
#ifdef WCN_PRONTO
                {0000},    
#endif
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
#ifdef WCN_PRONTO
                {0000},    
#endif

               
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    

               
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
                {0000},    
#endif
            },  
            
            {
                
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    

                
                {1600},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1600},    
                {1650},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1350},    
                {1200},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    
                {1600},    
                {1600},    
                {1500},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

#ifdef WLAN_FEATUURE_11AC
                
               
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1500},    

               
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
               
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    


               
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
#endif
            },  
            
            {
                
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    

                
                {1600},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1600},    
                {1650},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1350},    
                {1200},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    
                {1600},    
                {1600},    
                {1500},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

#ifdef WLAN_FEATUURE_111AC
                
               
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1500},    

               
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
               
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    


               
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
#endif
            },  
            
            {
                
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    

                
                {1600},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1600},    
                {1650},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1350},    
                {1200},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    
                {1600},    
                {1600},    
                {1500},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

#ifdef WLAN_FEATUURE_11AC
                
               
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1500},    

               
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
               
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    


               
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
#endif
            },  
            

            {
                
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    
                {0},    

                
                {1600},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1600},    
                {1650},    
                {1550},    
                {1450},    
                {1400},    
                {1400},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1350},    
                {1200},    
                {1600},    
                {1600},    
                {1550},    
                {1550},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

                
                {1600},    
                {1600},    
                {1550},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    
                {1600},    
                {1600},    
                {1500},    
                {1500},    
                {1450},    
                {1400},    
                {1300},    
                {1200},    

#ifdef WLAN_FEATUURE_11AC
                
               
                {1700},    
                {1700},    
                {1700},    
                {1650},    
                {1600},    
                {1550},    
                {1550},    
                {1500},    

               
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
                {1400},    
                {1400},    
                {1350},    
                {1300},    
                {1250},    
                {1200},    
                {1100},    
                {1000},    
                { 900},    
#ifdef WCN_PRONTO
                { 800},     
#endif
               
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1400},    
                {1300},    
                {1250},    
                {1250},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    


               
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
                {1300},    
                {1100},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                {1000},    
                { 900},    
                { 800},    
#endif
            },  
        },

        
        {
            
            
            
            
            

            
            
            
            
            
            

            


            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 23},           
                    {NV_CHANNEL_ENABLE, 22},           
                    {NV_CHANNEL_ENABLE, 22},           
                    {NV_CHANNEL_DISABLE, 30},           
                    {NV_CHANNEL_DISABLE, 30},           
                    {NV_CHANNEL_DISABLE, 30},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},             
                    {NV_CHANNEL_ENABLE, 17},             
                    {NV_CHANNEL_ENABLE, 17},             
                    {NV_CHANNEL_ENABLE, 17},             
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                

                    
                    {NV_CHANNEL_DFS, 22},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DISABLE, 0},             
                    {NV_CHANNEL_DISABLE, 0},             
                    {NV_CHANNEL_DISABLE, 0},             
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                
                    {NV_CHANNEL_DFS, 24},                

                    
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 0},             

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    { 0 },  
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 19},           
                    {NV_CHANNEL_ENABLE, 19},           
                    {NV_CHANNEL_DISABLE, 0},           

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            
                    {NV_CHANNEL_ENABLE, 23},            

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    { 0 },  
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 20},           
                    {NV_CHANNEL_ENABLE, 18},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               

                    
                    {NV_CHANNEL_DFS, 22},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 0},                
                    {NV_CHANNEL_DFS, 0},                
                    {NV_CHANNEL_DFS, 0},                
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    { 0 },  
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                                       
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_DISABLE, 0},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               

                    
                    {NV_CHANNEL_DFS, 22},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 0},                
                    {NV_CHANNEL_DFS, 0},                
                    {NV_CHANNEL_DFS, 0},                
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               
                    {NV_CHANNEL_DFS, 24},               

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    { 0 },  
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_DISABLE, 30},           
                    {NV_CHANNEL_DISABLE, 30},           
                    {NV_CHANNEL_DISABLE, 30},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            

                    
                    {NV_CHANNEL_DISABLE, 22},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            

                    
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    { 0 },  
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            },   

            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 26},           
                    {NV_CHANNEL_ENABLE, 16},           
                    {NV_CHANNEL_DISABLE, 0},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            

                    
                    {NV_CHANNEL_DISABLE, 22},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            

                    
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    { 0 },  
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_ENABLE, 15},           
                    {NV_CHANNEL_DISABLE, 0},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            

                    
                    {NV_CHANNEL_DISABLE, 22},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            

                    
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    { 0 },  
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                    
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_ENABLE, 14},           
                    {NV_CHANNEL_DISABLE, 0},           

                    
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            
                    {NV_CHANNEL_DISABLE, 23},            

                    
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_ENABLE, 17},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            

                    
                    {NV_CHANNEL_DISABLE, 22},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 24},            

                    
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 30},            
                    {NV_CHANNEL_ENABLE, 22},            
                    {NV_CHANNEL_ENABLE, 0},            
                    {NV_CHANNEL_ENABLE, 0},            

                    
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            

                    
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 20},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 27},            
                    {NV_CHANNEL_ENABLE, 25},            

                    
                    {NV_CHANNEL_DISABLE, 24},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 0},            
                    {NV_CHANNEL_DISABLE, 27},            
                    {NV_CHANNEL_DISABLE, 27},            

                    
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 30},            
                    {NV_CHANNEL_DISABLE, 0},             
                }, 

                {
                    { 0 },  
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            }, 

            {   
                { 
                    
                                       
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_ENABLE, 12},           
                    {NV_CHANNEL_DISABLE, 0},           
                }, 

                {
                    { 0 },  
                    {0},   
                    {0},   
                    {0},   
                    {0}    
                },

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                }, 

                { 
                    
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                    { 0 },                       
                } 
            } 
        },

        
        {
            
            
            
            
            

            0,                  
            { 'U', 'S', 'I' }   
        },

        
        {
            {
                {
                    0  , 
                    41 , 
                    43 , 
                    45 , 
                    47 , 
                    49 , 
                    51 , 
                    53 , 
                    55 , 
                    56 , 
                    58 , 
                    59 , 
                    60 , 
                    62 , 
                    63 , 
                    64 , 
                    65 , 
                    67 , 
                    68 , 
                    69 , 
                    70 , 
                    71 , 
                    72 , 
                    73 , 
                    74 , 
                    75 , 
                    75 , 
                    76 , 
                    77 , 
                    78 , 
                    78 , 
                    79 , 
                    80 , 
                    81 , 
                    82 , 
                    82 , 
                    83 , 
                    83 , 
                    84 , 
                    85 , 
                    86 , 
                    86 , 
                    87 , 
                    88 , 
                    89 , 
                    89 , 
                    90 , 
                    91 , 
                    91 , 
                    92 , 
                    92 , 
                    93 , 
                    93 , 
                    94 , 
                    94 , 
                    95 , 
                    95 , 
                    95 , 
                    96 , 
                    96 , 
                    97 , 
                    97 , 
                    98 , 
                    98 , 
                    98 , 
                    99 , 
                    99 , 
                    99 , 
                    100, 
                    100, 
                    100, 
                    101, 
                    101, 
                    102, 
                    102, 
                    102, 
                    102, 
                    103, 
                    103, 
                    103, 
                    103, 
                    104, 
                    104, 
                    104, 
                    104, 
                    105, 
                    105, 
                    105, 
                    105, 
                    105, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107,
                }
            }, 
            {
                {
                    0  , 
                    41 , 
                    43 , 
                    45 , 
                    47 , 
                    49 , 
                    51 , 
                    52 , 
                    54 , 
                    56 , 
                    57 , 
                    59 , 
                    60 , 
                    61 , 
                    62 , 
                    64 , 
                    65 , 
                    66 , 
                    67 , 
                    68 , 
                    69 , 
                    70 , 
                    71 , 
                    72 , 
                    73 , 
                    74 , 
                    75 , 
                    75 , 
                    76 , 
                    77 , 
                    78 , 
                    79 , 
                    79 , 
                    80 , 
                    81 , 
                    82 , 
                    82 , 
                    83 , 
                    84 , 
                    85 , 
                    85 , 
                    86 , 
                    87 , 
                    88 , 
                    88 , 
                    89 , 
                    89 , 
                    90 , 
                    91 , 
                    91 , 
                    92 , 
                    92 , 
                    93 , 
                    93 , 
                    94 , 
                    94 , 
                    95 , 
                    95 , 
                    96 , 
                    96 , 
                    96 , 
                    97 , 
                    97 , 
                    98 , 
                    98 , 
                    98 , 
                    99 , 
                    99 , 
                    99 , 
                    100, 
                    100, 
                    101, 
                    101, 
                    101, 
                    101, 
                    102, 
                    102, 
                    102, 
                    103, 
                    103, 
                    103, 
                    104, 
                    104, 
                    104, 
                    104, 
                    105, 
                    105, 
                    105, 
                    105, 
                    105, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    106, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107, 
                    107,
                }
            }, 
                {
                    {
                        0  , 
                        41 , 
                        43 , 
                        45 , 
                        47 , 
                        49 , 
                        51 , 
                        52 , 
                        54 , 
                        55 , 
                        57 , 
                        58 , 
                        60 , 
                        61 , 
                        62 , 
                        64 , 
                        65 , 
                        66 , 
                        67 , 
                        68 , 
                        69 , 
                        70 , 
                        71 , 
                        72 , 
                        73 , 
                        74 , 
                        75 , 
                        75 , 
                        76 , 
                        77 , 
                        78 , 
                        78 , 
                        79 , 
                        80 , 
                        81 , 
                        82 , 
                        82 , 
                        83 , 
                        84 , 
                        84 , 
                        85 , 
                        86 , 
                        87 , 
                        87 , 
                        88 , 
                        89 , 
                        89 , 
                        90 , 
                        90 , 
                        91 , 
                        91 , 
                        92 , 
                        93 , 
                        93 , 
                        94 , 
                        94 , 
                        94 , 
                        95 , 
                        95 , 
                        96 , 
                        96 , 
                        97 , 
                        97 , 
                        97 , 
                        98 , 
                        98 , 
                        99 , 
                        99 , 
                        99 , 
                        100, 
                        100, 
                        100, 
                        101, 
                        101, 
                        101, 
                        102, 
                        102, 
                        102, 
                        103, 
                        103, 
                        103, 
                        103, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        107,
                    }
                }, 
                {
                    {
                        0  , 
                        42 , 
                        44 , 
                        46 , 
                        48 , 
                        49 , 
                        51 , 
                        53 , 
                        55 , 
                        57 , 
                        58 , 
                        60 , 
                        61 , 
                        62 , 
                        63 , 
                        64 , 
                        66 , 
                        67 , 
                        68 , 
                        69 , 
                        70 , 
                        71 , 
                        72 , 
                        73 , 
                        74 , 
                        75 , 
                        75 , 
                        76 , 
                        77 , 
                        78 , 
                        78 , 
                        79 , 
                        80 , 
                        81 , 
                        82 , 
                        82 , 
                        83 , 
                        84 , 
                        84 , 
                        85 , 
                        86 , 
                        87 , 
                        87 , 
                        88 , 
                        88 , 
                        89 , 
                        90 , 
                        90 , 
                        91 , 
                        91 , 
                        92 , 
                        92 , 
                        93 , 
                        93 , 
                        94 , 
                        94 , 
                        95 , 
                        95 , 
                        95 , 
                        96 , 
                        96 , 
                        97 , 
                        97 , 
                        98 , 
                        98 , 
                        98 , 
                        99 , 
                        99 , 
                        99 , 
                        100, 
                        100, 
                        100, 
                        101, 
                        101, 
                        101, 
                        102, 
                        102, 
                        102, 
                        103, 
                        103, 
                        103, 
                        103, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106,
                    }
                }, 
                {
                    {
                        0  , 
                        41 , 
                        43 , 
                        45 , 
                        47 , 
                        49 , 
                        51 , 
                        53 , 
                        54 , 
                        56 , 
                        57 , 
                        59 , 
                        60 , 
                        62 , 
                        63 , 
                        65 , 
                        66 , 
                        67 , 
                        68 , 
                        69 , 
                        69 , 
                        71 , 
                        72 , 
                        72 , 
                        73 , 
                        74 , 
                        75 , 
                        76 , 
                        77 , 
                        78 , 
                        79 , 
                        79 , 
                        80 , 
                        81 , 
                        82 , 
                        83 , 
                        83 , 
                        84 , 
                        85 , 
                        86 , 
                        87 , 
                        87 , 
                        88 , 
                        89 , 
                        89 , 
                        90 , 
                        91 , 
                        91 , 
                        92 , 
                        92 , 
                        93 , 
                        93 , 
                        94 , 
                        94 , 
                        95 , 
                        95 , 
                        96 , 
                        96 , 
                        96 , 
                        97 , 
                        97 , 
                        98 , 
                        98 , 
                        98 , 
                        99 , 
                        99 , 
                        100, 
                        100, 
                        100, 
                        101, 
                        101, 
                        101, 
                        102, 
                        102, 
                        102, 
                        103, 
                        103, 
                        103, 
                        103, 
                        104, 
                        104, 
                        104, 
                        104, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106,
                    }
                }, 
                {
                    {
                        0  , 
                        41 , 
                        43 , 
                        45 , 
                        47 , 
                        49 , 
                        51 , 
                        53 , 
                        55 , 
                        56 , 
                        58 , 
                        59 , 
                        61 , 
                        62 , 
                        63 , 
                        64 , 
                        65 , 
                        66 , 
                        68 , 
                        69 , 
                        70 , 
                        71 , 
                        72 , 
                        73 , 
                        74 , 
                        75 , 
                        76 , 
                        77 , 
                        77 , 
                        78 , 
                        79 , 
                        80 , 
                        80 , 
                        81 , 
                        82 , 
                        83 , 
                        83 , 
                        84 , 
                        85 , 
                        86 , 
                        87 , 
                        87 , 
                        88 , 
                        89 , 
                        89 , 
                        90 , 
                        91 , 
                        91 , 
                        92 , 
                        92 , 
                        93 , 
                        93 , 
                        94 , 
                        94 , 
                        95 , 
                        95 , 
                        96 , 
                        96 , 
                        97 , 
                        97 , 
                        98 , 
                        98 , 
                        98 , 
                        99 , 
                        99 , 
                        100, 
                        100, 
                        100, 
                        101, 
                        101, 
                        101, 
                        102, 
                        102, 
                        102, 
                        103, 
                        103, 
                        103, 
                        103, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107,
                    }
                }, 
                {
                    {
                        0  , 
                        41 , 
                        43 , 
                        45 , 
                        47 , 
                        49 , 
                        51 , 
                        53 , 
                        55 , 
                        56 , 
                        58 , 
                        60 , 
                        61 , 
                        62 , 
                        63 , 
                        64 , 
                        66 , 
                        67 , 
                        68 , 
                        69 , 
                        70 , 
                        71 , 
                        72 , 
                        73 , 
                        74 , 
                        75 , 
                        76 , 
                        77 , 
                        77 , 
                        78 , 
                        79 , 
                        80 , 
                        80 , 
                        81 , 
                        82 , 
                        83 , 
                        84 , 
                        84 , 
                        85 , 
                        86 , 
                        87 , 
                        87 , 
                        88 , 
                        88 , 
                        89 , 
                        90 , 
                        90 , 
                        91 , 
                        91 , 
                        92 , 
                        92 , 
                        93 , 
                        93 , 
                        94 , 
                        94 , 
                        95 , 
                        95 , 
                        96 , 
                        96 , 
                        97 , 
                        97 , 
                        97 , 
                        98 , 
                        98 , 
                        99 , 
                        99 , 
                        99 , 
                        100, 
                        100, 
                        100, 
                        101, 
                        101, 
                        101, 
                        102, 
                        102, 
                        102, 
                        103, 
                        103, 
                        103, 
                        103, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106,
                    }
                }, 
                {
                    {
                        0  , 
                        40 , 
                        42 , 
                        45 , 
                        47 , 
                        49 , 
                        51 , 
                        52 , 
                        54 , 
                        56 , 
                        58 , 
                        59 , 
                        61 , 
                        62 , 
                        63 , 
                        65 , 
                        66 , 
                        67 , 
                        68 , 
                        69 , 
                        70 , 
                        71 , 
                        72 , 
                        73 , 
                        74 , 
                        75 , 
                        76 , 
                        77 , 
                        77 , 
                        78 , 
                        79 , 
                        80 , 
                        81 , 
                        81 , 
                        82 , 
                        83 , 
                        84 , 
                        85 , 
                        86 , 
                        86 , 
                        87 , 
                        88 , 
                        89 , 
                        89 , 
                        90 , 
                        91 , 
                        91 , 
                        92 , 
                        92 , 
                        93 , 
                        93 , 
                        94 , 
                        94 , 
                        95 , 
                        95 , 
                        96 , 
                        96 , 
                        97 , 
                        97 , 
                        97 , 
                        98 , 
                        98 , 
                        99 , 
                        99 , 
                        99 , 
                        100, 
                        100, 
                        100, 
                        101, 
                        101, 
                        102, 
                        102, 
                        102, 
                        103, 
                        103, 
                        103, 
                        104, 
                        104, 
                        104, 
                        104, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107,
                    }
                }, 
                {
                    {
                        0  , 
                        41 , 
                        44 , 
                        46 , 
                        48 , 
                        50 , 
                        52 , 
                        54 , 
                        56 , 
                        58 , 
                        59 , 
                        60 , 
                        62 , 
                        63 , 
                        64 , 
                        66 , 
                        67 , 
                        68 , 
                        69 , 
                        70 , 
                        71 , 
                        72 , 
                        73 , 
                        74 , 
                        75 , 
                        76 , 
                        77 , 
                        78 , 
                        79 , 
                        79 , 
                        80 , 
                        81 , 
                        82 , 
                        83 , 
                        83 , 
                        84 , 
                        85 , 
                        86 , 
                        87 , 
                        87 , 
                        88 , 
                        89 , 
                        89 , 
                        90 , 
                        91 , 
                        91 , 
                        92 , 
                        92 , 
                        93 , 
                        93 , 
                        94 , 
                        94 , 
                        95 , 
                        95 , 
                        96 , 
                        96 , 
                        97 , 
                        97 , 
                        98 , 
                        98 , 
                        98 , 
                        99 , 
                        99 , 
                        100, 
                        100, 
                        100, 
                        101, 
                        101, 
                        101, 
                        102, 
                        102, 
                        103, 
                        103, 
                        103, 
                        104, 
                        104, 
                        104, 
                        104, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107,
                    }
                }, 
                {
                    {
                        0  , 
                        41 , 
                        43 , 
                        47 , 
                        48 , 
                        50 , 
                        52 , 
                        53 , 
                        55 , 
                        57 , 
                        58 , 
                        60 , 
                        62 , 
                        63 , 
                        64 , 
                        65 , 
                        67 , 
                        68 , 
                        69 , 
                        70 , 
                        71 , 
                        72 , 
                        73 , 
                        74 , 
                        75 , 
                        76 , 
                        77 , 
                        77 , 
                        78 , 
                        79 , 
                        80 , 
                        81 , 
                        82 , 
                        83 , 
                        84 , 
                        85 , 
                        85 , 
                        86 , 
                        87 , 
                        88 , 
                        89 , 
                        89 , 
                        90 , 
                        90 , 
                        91 , 
                        92 , 
                        92 , 
                        93 , 
                        94 , 
                        94 , 
                        95 , 
                        95 , 
                        96 , 
                        96 , 
                        96 , 
                        97 , 
                        97 , 
                        98 , 
                        98 , 
                        99 , 
                        99 , 
                        99 , 
                        100, 
                        100, 
                        101, 
                        101, 
                        102, 
                        102, 
                        102, 
                        103, 
                        103, 
                        103, 
                        104, 
                        104, 
                        104, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        106, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107, 
                        107,
                    }
                }, 
                {
                    {
                        0  , 
                        42 , 
                        44 , 
                        47 , 
                        49 , 
                        51 , 
                        52 , 
                        54 , 
                        55 , 
                        57 , 
                        58 , 
                        60 , 
                        61 , 
                        63 , 
                        64 , 
                        65 , 
                        66 , 
                        67 , 
                        69 , 
                        70 , 
                        71 , 
                        72 , 
                        73 , 
                        74 , 
                        75 , 
                        76 , 
                        77 , 
                        77 , 
                        78 , 
                        79 , 
                        80 , 
                        81 , 
                        82 , 
                        82 , 
                        83 , 
                        84 , 
                        85 , 
                        86 , 
                        86 , 
                        87 , 
                        88 , 
                        89 , 
                        90 , 
                        90 , 
                        91 , 
                        91 , 
                        92 , 
                        92 , 
                        93 , 
                        93 , 
                        94 , 
                        94 , 
                        95 , 
                        96 , 
                        96 , 
                        97 , 
                        97 , 
                        97 , 
                        98 , 
                        98 , 
                        99 , 
                        99 , 
                        100, 
                        100, 
                        100, 
                        101, 
                        101, 
                        101, 
                        102, 
                        102, 
                        102, 
                        103, 
                        103, 
                        103, 
                        103, 
                        103, 
                        103, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                    }
                }, 
                {
                    {
                        0  , 
                        41 , 
                        44 , 
                        46 , 
                        48 , 
                        50 , 
                        52 , 
                        54 , 
                        56 , 
                        57 , 
                        59 , 
                        60 , 
                        61 , 
                        63 , 
                        64 , 
                        65 , 
                        66 , 
                        67 , 
                        69 , 
                        70 , 
                        71 , 
                        72 , 
                        73 , 
                        74 , 
                        75 , 
                        76 , 
                        77 , 
                        77 , 
                        78 , 
                        79 , 
                        80 , 
                        80 , 
                        81 , 
                        82 , 
                        83 , 
                        83 , 
                        84 , 
                        85 , 
                        86 , 
                        86 , 
                        87 , 
                        88 , 
                        88 , 
                        89 , 
                        90 , 
                        90 , 
                        91 , 
                        92 , 
                        92 , 
                        93 , 
                        93 , 
                        94 , 
                        94 , 
                        95 , 
                        95 , 
                        96 , 
                        96 , 
                        96 , 
                        97 , 
                        97 , 
                        98 , 
                        98 , 
                        99 , 
                        99 , 
                        99 , 
                        100, 
                        100, 
                        100, 
                        101, 
                        101, 
                        101, 
                        102, 
                        102, 
                        102, 
                        103, 
                        103, 
                        103, 
                        103, 
                        103, 
                        103, 
                        103, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105,
                    }
                }, 
                {
                    {
                        0  , 
                        42 , 
                        44 , 
                        46 , 
                        48 , 
                        50 , 
                        52 , 
                        54 , 
                        56 , 
                        58 , 
                        59 , 
                        60 , 
                        61 , 
                        63 , 
                        64 , 
                        65 , 
                        66 , 
                        68 , 
                        69 , 
                        70 , 
                        71 , 
                        72 , 
                        73 , 
                        74 , 
                        75 , 
                        75 , 
                        76 , 
                        77 , 
                        78 , 
                        79 , 
                        80 , 
                        80 , 
                        81 , 
                        82 , 
                        83 , 
                        83 , 
                        84 , 
                        85 , 
                        86 , 
                        86 , 
                        87 , 
                        88 , 
                        89 , 
                        89 , 
                        90 , 
                        91 , 
                        91 , 
                        92 , 
                        93 , 
                        93 , 
                        94 , 
                        94 , 
                        95 , 
                        95 , 
                        96 , 
                        96 , 
                        97 , 
                        97 , 
                        97 , 
                        98 , 
                        98 , 
                        99 , 
                        99 , 
                        100, 
                        100, 
                        100, 
                        101, 
                        101, 
                        101, 
                        102, 
                        102, 
                        102, 
                        103, 
                        103, 
                        103, 
                        103, 
                        103, 
                        103, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        104, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105, 
                        105,
                    }
                }, 
                {
                    {
                       0,  
                       40,  
                       43,  
                       45,  
                       47,  
                       49,  
                       50,  
                       52,  
                       54,  
                       56,  
                       57,  
                       58,  
                       59,  
                       60,  
                       62,  
                       63,  
                       64,  
                       65,  
                       66,  
                       67,  
                       68,  
                       69,  
                       70,  
                       71,  
                       72,  
                       73,  
                       74,  
                       74,  
                       75,  
                       76,  
                       77,  
                       78,  
                       78,  
                       79,  
                       80,  
                       81,  
                       82,  
                       83,  
                       83,  
                       84,  
                       85,  
                       85,  
                       86,  
                       87,  
                       87,  
                       88,  
                       89,  
                       89,  
                       90,  
                       90,  
                       91,  
                       91,  
                       92,  
                       92,  
                       93,  
                       93,  
                       94,  
                       94,  
                       95,  
                       95,  
                       96,  
                       96,  
                       96,  
                       97,  
                       97,  
                       97,  
                       98,  
                       98,  
                       98,  
                       98,  
                       99,  
                       99,  
                       99,  
                       99,  
                       99,  
                       99,  
                       99,  
                       99,  
                       99,  
                       99,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100,  
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100, 
                       100,
                    }
                }, 
        },

        
        {
            98,  
            101,  
            101,  
            100,  
            98,  
            97,  
            94,  
            94,  
            92,  
            90,  
            94,  
            95,  
            97,  
            104,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
            100,   
        },

        
        
        
        
        {
            
            {
                
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
            },
            
            {
                
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
            },
            
            {
                
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
            },
            
            {
                
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
            },
            
            {
                
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
                {100},    
            }
        },

#if 0 
        
        {
            0x7FFF,      
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            { 0x00, 0x00 },        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x7FFF,      
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x00,        
            0x00,        
            0x00,        
            0x00,        

            0x7FFF,        
            0x7FFF,        

            { 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }, 
                {
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }, 
                    { 0x00, 0x00 }  
                }  
            },        

            { 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }  
            },        

            { 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }, 
                {
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }, 
                    { 0x0000, 0x0000, 0x0000 }  
                }  
            },        

            { 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }, 
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                },  
                {
                    {
                        {
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }, 
                            { 0x00, 0x00 }  
                        } 
                    } 
                }  
            },        

            {
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }, 
                { 0x0000, { 0x00, 0x00 } }  
            }        

        }, 
#endif
        
        {
            0,   
            0,   
            0,   
            0,   

            0,   
            0,   
            0,   
            0,   
                
            0,   
            0,   
            0,   
            0,   
                
            0,   
            0,   
            0,   
            1,   
                
            1,   
            1,   
            1,   
            1,   

            0,   
            0,   
            0,   
        },


        
        {
            
            {
                
                {300}, 

                
                {300}  
            },
            
            {
                
                {0},   

                
                {0}    
            }
        },

        
        {
            0x0,             
            {
                1400,        
                1400,        
                
                1600,        
                0,           
                0,           
                0,           

                0x1B,        
                0xFF,        

                0,           
                0,           
                0,           
                0,           
                0,           
                0,           
                0,           
                0,           
                0,           
            }
        },


        
        {
            280,  
            270,  
            270,  
            270,  
            270,  
            270,  
            280,  
            280,  
            290,  
            300,  
            300,  
            310,  
            310,  
            310,   
            280,  
            280,  
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
            280,   
        },

        
        {
            { 2150 }, 
            { 1850 }, 
            { 1750 }  
        },

        
        {
            0, 0
        },

        
        {
            0
        }

    } 
};

#endif


