/*******************************************************************************
* File Name: cycfg_system.h
*
* Description:
* System configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.3.0.4276
* mtb-pdl-cat2 1.2.0.0
* personalities 5.0.0.0
* udd 3.0.0.1156
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation
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

#if !defined(CYCFG_SYSTEM_H)
#define CYCFG_SYSTEM_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"
#include "cy_syspm.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define cpuss_0_dap_0_ENABLED 1U
#define srss_0_clock_0_ENABLED 1U
#define CY_CFG_SYSCLK_ECO_CFG_ERROR 1
#define CY_CFG_SYSCLK_ECO_EN_ERROR 2
#define CY_CFG_SYSCLK_PLL_SRC_ERROR 3
#define CY_CFG_SYSCLK_PLL_CFG_ERROR 4
#define CY_CFG_SYSCLK_PLL_EN_ERROR 5
#define CY_CFG_SYSCLK_HF_SRC_ERROR 6
#define srss_0_clock_0_hfclk_0_ENABLED 1U
#define srss_0_clock_0_ilo_0_ENABLED 1U
#define srss_0_clock_0_imo_0_ENABLED 1U
#define CY_CFG_SYSCLK_IMO_FREQ_HZ 48000000UL
#define CY_CFG_SYSCLK_IMO_FREQ_MHZ 48UL
#define CY_CFG_SYSCLK_IMO_FREQ CY_SYSCLK_IMO_48MHZ
#define srss_0_clock_0_lfclk_0_ENABLED 1U
#define CY_CFG_SYSCLK_CLKLF_FREQ_HZ 40000
#define srss_0_clock_0_sysclk_0_ENABLED 1U
#define srss_0_power_0_ENABLED 1U
#define CY_CFG_PWR_MODE_ACTIVE 0x04UL
#define CY_CFG_PWR_MODE_SLEEP 0x08UL
#define CY_CFG_PWR_MODE_DEEPSLEEP 0x10UL
#define CY_CFG_PWR_SYS_IDLE_MODE CY_CFG_PWR_MODE_DEEPSLEEP
#define CY_CFG_PWR_DEEPSLEEP_LATENCY 0UL
#define CY_CFG_PWR_VDDA_MV 3300
#define CY_CFG_PWR_VDDD_MV 3300

__WEAK void cycfg_ClockStartupError(uint32_t error, cy_en_sysclk_status_t status);

void init_cycfg_system(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_SYSTEM_H */
