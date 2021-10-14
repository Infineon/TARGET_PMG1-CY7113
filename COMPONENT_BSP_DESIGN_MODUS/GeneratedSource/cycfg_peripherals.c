/*******************************************************************************
* File Name: cycfg_peripherals.c
*
* Description:
* Peripheral Hardware Block configuration
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

#include "cycfg_peripherals.h"

#define CYBSP_USB_INTR_LVL_SEL (CY_USBFS_DEV_DRV_SET_SOF_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_BUS_RESET_LVL(0x2U) | \
                 CY_USBFS_DEV_DRV_SET_EP0_LVL(0x2U) | \
                 CY_USBFS_DEV_DRV_SET_ARB_EP_LVL(0x0U) | \
                 CY_USBFS_DEV_DRV_SET_EP1_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP2_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP3_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP4_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP5_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP6_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP7_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP8_LVL(0x1U))

cy_stc_csd_context_t cy_csd_0_context = 
{
    .lockKey = CY_CSD_NONE_KEY,
};
const cy_stc_usbfs_dev_drv_config_t CYBSP_USB_config = 
{
    .mode = CY_USBFS_DEV_DRV_EP_MANAGEMENT_CPU,
    .epAccess = CY_USBFS_DEV_DRV_USE_8_BITS_DR,
    .epBuffer = NULL,
    .epBufferSize = 0U,
    .intrLevelSel = CYBSP_USB_INTR_LVL_SEL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_USB_obj = 
    {
        .type = CYHAL_RSC_USB,
        .block_num = 0U,
        .channel_num = 0U,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_fault_vbus_ovp_cfg_t mtb_usbpd_port0_ovp_config = 
{
    .enable = true,
    .mode = 2,
    .threshold = 20,
    .debounce = 10,
    .retryCount = 2,
};
const cy_stc_fault_vbus_uvp_cfg_t mtb_usbpd_port0_uvp_config = 
{
    .enable = true,
    .mode = 2,
    .threshold = 20,
    .debounce = 10,
    .retryCount = 2,
};
const cy_stc_usbpd_config_t mtb_usbpd_port0_config = 
{
    .vbusOvpConfig = &mtb_usbpd_port0_ovp_config,
    .vbusUvpConfig = &mtb_usbpd_port0_uvp_config,
    .vbusOcpConfig = NULL,
    .vbusScpConfig = NULL,
    .vbusRcpConfig = NULL,
    .vconnOcpConfig = NULL,
    .ccOvpConfig = NULL,
    .sbuOvpConfig = NULL,
    .legacyChargingConfig = NULL,
};


void init_cycfg_peripherals(void)
{
    Cy_SysClk_PeriphAssignDivider(PCLK_CSD_CLOCK, CY_SYSCLK_DIV_16_BIT, 0U);

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_USB_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_RX, CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_TX, CY_SYSCLK_DIV_8_BIT, 1U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_SAR, CY_SYSCLK_DIV_8_BIT, 2U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_FILTER1, CY_SYSCLK_DIV_8_BIT, 3U);
}
