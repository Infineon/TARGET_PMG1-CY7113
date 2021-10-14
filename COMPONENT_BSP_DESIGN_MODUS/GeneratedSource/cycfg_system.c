/*******************************************************************************
* File Name: cycfg_system.c
*
* Description:
* System configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.0.5721
* mtb-pdl-cat2 1.4.0.5338
* personalities 5.0.0.0
* udd 3.0.0.1428
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_system.h"

#define CY_CFG_SYSCLK_HFCLK_ENABLED 1
#define CY_CFG_SYSCLK_HFCLK_FREQ_MHZ 48UL
#define CY_CFG_SYSCLK_HFCLK_SOURCE CY_SYSCLK_CLKHF_IN_IMO
#define CY_CFG_SYSCLK_HFCLK_DIVIDER CY_SYSCLK_NO_DIV
#define CY_CFG_SYSCLK_ILO_ENABLED 1
#define CY_CFG_SYSCLK_IMO_ENABLED 1
#define CY_CFG_SYSCLK_CLKLF_ENABLED 1
#define CY_CFG_SYSCLK_CLKSYS_ENABLED 1
#define CY_CFG_SYSCLK_CLKSYS_DIVIDER CY_SYSCLK_NO_DIV
#define CY_CFG_SYSCLK_CLKSYS_FREQ_MHZ 48UL

__WEAK void cycfg_ClockStartupError(uint32_t error, cy_en_sysclk_status_t status)
{
    CY_UNUSED_PARAMETER(error);
    CY_UNUSED_PARAMETER(status);
    CY_ASSERT_L1(false);
}
__STATIC_INLINE void Cy_SysClk_ClkHfInit()
{
    cy_en_sysclk_status_t status = Cy_SysClk_ClkHfSetSource(CY_CFG_SYSCLK_HFCLK_SOURCE);
    if (CY_SYSCLK_SUCCESS != status)
    {
        cycfg_ClockStartupError(CY_CFG_SYSCLK_HF_SRC_ERROR, status);
    }
    Cy_SysClk_ClkHfSetDivider(CY_CFG_SYSCLK_HFCLK_DIVIDER);
}
__STATIC_INLINE void Cy_SysClk_IloInit()
{
    Cy_SysClk_IloEnable();
}
__STATIC_INLINE void Cy_SysClk_ImoInit()
{
    Cy_SysClk_ImoSetFrequency(CY_CFG_SYSCLK_IMO_FREQ);  
}
__STATIC_INLINE void Cy_SysClk_ClkSysInit()
{
    Cy_SysClk_ClkSysSetDivider(CY_CFG_SYSCLK_CLKSYS_DIVIDER);
}


void init_cycfg_system(void)
{
    /* Set worst case memory wait states (48 MHz), will update at the end */
    Cy_SysLib_SetWaitStates(48);
    #ifdef CY_CFG_PWR_ENABLED
        #ifdef CY_CFG_PWR_INIT
        init_cycfg_power();
        #else
        #warning Power system will not be configured. Update power personality to v1.20 or later.
        #endif /* CY_CFG_PWR_INIT */
    #endif /* CY_CFG_PWR_ENABLED */
    
    /* Reset the platform clocks configuration to teh default state */
    Cy_SysClk_ImoEnable();
    (void)Cy_SysClk_ImoSetFrequency(CY_SYSCLK_IMO_24MHZ);
    (void)Cy_SysClk_ClkHfSetSource(CY_SYSCLK_CLKHF_IN_IMO);
    Cy_SysClk_ClkHfSetDivider(CY_SYSCLK_NO_DIV);
    Cy_SysClk_ClkSysSetDivider(CY_SYSCLK_NO_DIV);
    SystemCoreClockUpdate();
    (void)Cy_SysClk_ClkPumpSetSource(CY_SYSCLK_PUMP_IN_GND);
    #ifdef CY_IP_M0S8EXCO
    (void)Cy_SysClk_PllDisable(0U);
    #endif /* CY_IP_M0S8EXCO */
    
    /* Enable all source clocks */
    #ifdef CY_CFG_SYSCLK_ILO_ENABLED
    Cy_SysClk_IloInit();
    #endif
    
    #ifdef CY_CFG_SYSCLK_WCO_ENABLED
    Cy_SysClk_WcoInit();
    #endif
    
    #ifdef CY_CFG_SYSCLK_IMO_ENABLED
    Cy_SysClk_ImoInit();
    #endif
    
    #ifdef CY_CFG_SYSCLK_ECO_ENABLED
    Cy_SysClk_EcoInit();
    #endif
    
    #ifdef CY_CFG_SYSCLK_EXTCLK_ENABLED
    Cy_SysClk_ExtClkInit();
    #endif
    
    #ifdef CY_CFG_SYSCLK_EXTREF_ENABLED
    Cy_SysClk_ExtRefInit();
    #endif
    
    /* Configure and enable PLLs */
    #ifdef CY_CFG_SYSCLK_PLL0_ENABLED
    Cy_SysClk_Pll0Init();
    #endif
    #ifdef CY_CFG_SYSCLK_HFCLK_ENABLED
    Cy_SysClk_ClkHfInit();
    #endif
    
    #ifdef CY_CFG_SYSCLK_CLKSYS_ENABLED
    Cy_SysClk_ClkSysInit();
    #endif
    
    /* Configure miscellaneous clocks */
    #ifdef CY_CFG_SYSCLK_SYSTICK_ENABLED
    Cy_SysClk_SysTickInit();
    #endif
    
    #ifdef CY_CFG_SYSCLK_CLKPUMP_ENABLED
    Cy_SysClk_ClkPumpInit();
    #endif
    
    #ifdef CY_CFG_SYSCLK_CLKSYS_ENABLED
    /* Set accurate flash wait states */
    Cy_SysLib_SetWaitStates(CY_CFG_SYSCLK_CLKSYS_FREQ_MHZ);
    #else
    Cy_SysLib_SetWaitStates(Cy_SysClk_ClkSysGetFrequency()/1000000);
    #endif
    
    /* Update System Core Clock values for correct Cy_SysLib_Delay functioning */
    SystemCoreClockUpdate();

}
