/*******************************************************************************
* File Name: cycfg_peripherals.h
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"
#include "cy_csd.h"
#include "cy_usbfs_dev_drv.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cy_usbpd_common.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_CSD_ENABLED 1U
#define CY_CAPSENSE_CORE 0u
#define CY_CAPSENSE_CPU_CLK 48000000u
#define CY_CAPSENSE_PERI_CLK 48000000u
#define CY_CAPSENSE_VDDA_MV 3300u
#define CY_CAPSENSE_PERI_DIV_TYPE CY_SYSCLK_DIV_16_BIT
#define CY_CAPSENSE_PERI_DIV_INDEX 0u
#define Cmod_PORT GPIO_PRT5
#define Button0_Sns0_PORT GPIO_PRT2
#define Button1_Sns0_PORT GPIO_PRT2
#define LinearSlider0_Sns0_PORT GPIO_PRT6
#define LinearSlider0_Sns1_PORT GPIO_PRT6
#define LinearSlider0_Sns2_PORT GPIO_PRT0
#define LinearSlider0_Sns3_PORT GPIO_PRT6
#define LinearSlider0_Sns4_PORT GPIO_PRT6
#define Cmod_PIN 1u
#define Button0_Sns0_PIN 1u
#define Button1_Sns0_PIN 2u
#define LinearSlider0_Sns0_PIN 0u
#define LinearSlider0_Sns1_PIN 1u
#define LinearSlider0_Sns2_PIN 0u
#define LinearSlider0_Sns3_PIN 2u
#define LinearSlider0_Sns4_PIN 3u
#define Cmod_PORT_NUM 5u
#define CYBSP_CSD_HW CSD0
#define CYBSP_CSD_IRQ csd_interrupt_IRQn
#define CYBSP_USB_ENABLED 1U
#define CYBSP_USB_ACTIVE_ENDPOINTS_MASK 255U
#define CYBSP_USB_ENDPOINTS_BUFFER_SIZE 512U
#define CYBSP_USB_ENDPOINTS_ACCESS_TYPE 0U
#define CYBSP_USB_HW USBFS
#define CYBSP_USB_HI_IRQ usb_interrupt_hi_IRQn
#define CYBSP_USB_MED_IRQ usb_interrupt_med_IRQn
#define CYBSP_USB_LO_IRQ usb_interrupt_lo_IRQn
#define PD_PORT0_ENABLED 1U
#define mtb_usbpd_port0_HW PDSS0
#define mtb_usbpd_port0_HW_TRIM PDSS_TRIMS0
#define mtb_usbpd_port0_IRQ usbpd_0_interrupt_IRQn
#define mtb_usbpd_port0_DS_IRQ usbpd_0_interrupt_wakeup_IRQn

extern cy_stc_csd_context_t cy_csd_0_context;
extern const cy_stc_usbfs_dev_drv_config_t CYBSP_USB_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_USB_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_fault_vbus_ovp_cfg_t mtb_usbpd_port0_ovp_config;
extern const cy_stc_fault_vbus_uvp_cfg_t mtb_usbpd_port0_uvp_config;
extern const cy_stc_usbpd_config_t mtb_usbpd_port0_config;

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */
