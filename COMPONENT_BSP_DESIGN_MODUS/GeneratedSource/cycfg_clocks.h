/*******************************************************************************
* File Name: cycfg_clocks.h
*
* Description:
* Clock configuration
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

#if !defined(CYCFG_CLOCKS_H)
#define CYCFG_CLOCKS_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"
#if defined (CY_USING_HAL)
	#include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)

#if defined(__cplusplus)
extern "C" {
#endif

#define CLK_CSD_ENABLED 1U
#define CLK_CSD_HW CY_SYSCLK_DIV_16_BIT
#define CLK_CSD_NUM 0U
#define CLK_PDRX_ENABLED 1U
#define CLK_PDRX_HW CY_SYSCLK_DIV_8_BIT
#define CLK_PDRX_NUM 0U
#define CLK_PDTX_ENABLED 1U
#define CLK_PDTX_HW CY_SYSCLK_DIV_8_BIT
#define CLK_PDTX_NUM 1U
#define CLK_PDSAR_ENABLED 1U
#define CLK_PDSAR_HW CY_SYSCLK_DIV_8_BIT
#define CLK_PDSAR_NUM 2U
#define CLK_FILTER1_ENABLED 1U
#define CLK_FILTER1_HW CY_SYSCLK_DIV_8_BIT
#define CLK_FILTER1_NUM 3U

#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CLK_CSD_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CLK_PDRX_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CLK_PDTX_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CLK_PDSAR_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CLK_FILTER1_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_clocks(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_CLOCKS_H */
