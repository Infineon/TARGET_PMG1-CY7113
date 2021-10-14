/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
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

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_CSD_SLD2_ENABLED 1U
#define CYBSP_CSD_SLD2_PORT GPIO_PRT0
#define CYBSP_CSD_SLD2_PORT_NUM 0U
#define CYBSP_CSD_SLD2_PIN 0U
#define CYBSP_CSD_SLD2_NUM 0U
#define CYBSP_CSD_SLD2_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_SLD2_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_0_HSIOM
    #define ioss_0_port_0_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD2_HSIOM ioss_0_port_0_pin_0_HSIOM
#define CYBSP_CSD_SLD2_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD2_HAL_PORT_PIN P0_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD2 P0_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD2_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD2_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD2_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDCK_ENABLED 1U
#define CYBSP_SWDCK_PORT GPIO_PRT1
#define CYBSP_SWDCK_PORT_NUM 1U
#define CYBSP_SWDCK_PIN 1U
#define CYBSP_SWDCK_NUM 1U
#define CYBSP_SWDCK_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWDCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_1_HSIOM
    #define ioss_0_port_1_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDCK_HSIOM ioss_0_port_1_pin_1_HSIOM
#define CYBSP_SWDCK_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_PORT_PIN P1_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK P1_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDIO_ENABLED 1U
#define CYBSP_SWDIO_PORT GPIO_PRT1
#define CYBSP_SWDIO_PORT_NUM 1U
#define CYBSP_SWDIO_PIN 2U
#define CYBSP_SWDIO_NUM 2U
#define CYBSP_SWDIO_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_2_HSIOM
    #define ioss_0_port_1_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDIO_HSIOM ioss_0_port_1_pin_2_HSIOM
#define CYBSP_SWDIO_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_PORT_PIN P1_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO P1_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define CYBSP_LED_SLD4_ENABLED 1U
#define CYBSP_LED_SLD4_PORT GPIO_PRT1
#define CYBSP_LED_SLD4_PORT_NUM 1U
#define CYBSP_LED_SLD4_PIN 3U
#define CYBSP_LED_SLD4_NUM 3U
#define CYBSP_LED_SLD4_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define CYBSP_LED_SLD4_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_3_HSIOM
    #define ioss_0_port_1_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_LED_SLD4_HSIOM ioss_0_port_1_pin_3_HSIOM
#define CYBSP_LED_SLD4_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD4_HAL_PORT_PIN P1_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD4 P1_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD4_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD4_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD4_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define CYBSP_LED_SLD1_ENABLED 1U
#define CYBSP_LED_SLD1_PORT GPIO_PRT1
#define CYBSP_LED_SLD1_PORT_NUM 1U
#define CYBSP_LED_SLD1_PIN 4U
#define CYBSP_LED_SLD1_NUM 4U
#define CYBSP_LED_SLD1_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define CYBSP_LED_SLD1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_4_HSIOM
    #define ioss_0_port_1_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_LED_SLD1_HSIOM ioss_0_port_1_pin_4_HSIOM
#define CYBSP_LED_SLD1_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD1_HAL_PORT_PIN P1_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD1 P1_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD1_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define CYBSP_LED_SLD2_ENABLED 1U
#define CYBSP_LED_SLD2_PORT GPIO_PRT1
#define CYBSP_LED_SLD2_PORT_NUM 1U
#define CYBSP_LED_SLD2_PIN 5U
#define CYBSP_LED_SLD2_NUM 5U
#define CYBSP_LED_SLD2_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define CYBSP_LED_SLD2_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_5_HSIOM
    #define ioss_0_port_1_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_LED_SLD2_HSIOM ioss_0_port_1_pin_5_HSIOM
#define CYBSP_LED_SLD2_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD2_HAL_PORT_PIN P1_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD2 P1_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD2_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD2_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD2_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define CYBSP_LED_SLD3_ENABLED 1U
#define CYBSP_LED_SLD3_PORT GPIO_PRT1
#define CYBSP_LED_SLD3_PORT_NUM 1U
#define CYBSP_LED_SLD3_PIN 6U
#define CYBSP_LED_SLD3_NUM 6U
#define CYBSP_LED_SLD3_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define CYBSP_LED_SLD3_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_6_HSIOM
    #define ioss_0_port_1_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_LED_SLD3_HSIOM ioss_0_port_1_pin_6_HSIOM
#define CYBSP_LED_SLD3_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD3_HAL_PORT_PIN P1_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD3 P1_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD3_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD3_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD3_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define CYBSP_CSD_BTN0_ENABLED 1U
#define CYBSP_CSD_BTN0_PORT GPIO_PRT2
#define CYBSP_CSD_BTN0_PORT_NUM 2U
#define CYBSP_CSD_BTN0_PIN 1U
#define CYBSP_CSD_BTN0_NUM 1U
#define CYBSP_CSD_BTN0_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_BTN0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_1_HSIOM
    #define ioss_0_port_2_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_BTN0_HSIOM ioss_0_port_2_pin_1_HSIOM
#define CYBSP_CSD_BTN0_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_BTN0_HAL_PORT_PIN P2_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_BTN0 P2_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_BTN0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_BTN0_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_BTN0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_CSD_BTN1_ENABLED 1U
#define CYBSP_CSD_BTN1_PORT GPIO_PRT2
#define CYBSP_CSD_BTN1_PORT_NUM 2U
#define CYBSP_CSD_BTN1_PIN 2U
#define CYBSP_CSD_BTN1_NUM 2U
#define CYBSP_CSD_BTN1_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_BTN1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_2_HSIOM
    #define ioss_0_port_2_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_BTN1_HSIOM ioss_0_port_2_pin_2_HSIOM
#define CYBSP_CSD_BTN1_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_BTN1_HAL_PORT_PIN P2_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_BTN1 P2_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_BTN1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_BTN1_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_BTN1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_LED_BTN1_ENABLED 1U
#define CYBSP_LED_BTN1_PORT GPIO_PRT2
#define CYBSP_LED_BTN1_PORT_NUM 2U
#define CYBSP_LED_BTN1_PIN 3U
#define CYBSP_LED_BTN1_NUM 3U
#define CYBSP_LED_BTN1_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define CYBSP_LED_BTN1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_3_HSIOM
    #define ioss_0_port_2_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_LED_BTN1_HSIOM ioss_0_port_2_pin_3_HSIOM
#define CYBSP_LED_BTN1_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_LED_BTN1_HAL_PORT_PIN P2_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_BTN1 P2_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_BTN1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_BTN1_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_BTN1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define CYBSP_LED_BTN0_ENABLED 1U
#define CYBSP_LED_BTN0_PORT GPIO_PRT2
#define CYBSP_LED_BTN0_PORT_NUM 2U
#define CYBSP_LED_BTN0_PIN 4U
#define CYBSP_LED_BTN0_NUM 4U
#define CYBSP_LED_BTN0_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define CYBSP_LED_BTN0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_4_HSIOM
    #define ioss_0_port_2_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_LED_BTN0_HSIOM ioss_0_port_2_pin_4_HSIOM
#define CYBSP_LED_BTN0_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_LED_BTN0_HAL_PORT_PIN P2_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_BTN0 P2_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_BTN0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_BTN0_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_BTN0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_USER_BTN (P3_3)
    #define CYBSP_USER_BTN1 CYBSP_USER_BTN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_DEBUG_UART_RX (P3_5)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_DEBUG_UART_TX (P3_6)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2C_SCL (P4_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2C_SDA (P4_1)
#endif //defined (CY_USING_HAL)
#define CYBSP_CMOD_ENABLED 1U
#define CYBSP_CMOD_PORT GPIO_PRT5
#define CYBSP_CMOD_PORT_NUM 5U
#define CYBSP_CMOD_PIN 1U
#define CYBSP_CMOD_NUM 1U
#define CYBSP_CMOD_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CMOD_INIT_DRIVESTATE 1
#ifndef ioss_0_port_5_pin_1_HSIOM
    #define ioss_0_port_5_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CMOD_HSIOM ioss_0_port_5_pin_1_HSIOM
#define CYBSP_CMOD_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CMOD_HAL_PORT_PIN P5_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CMOD P5_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CMOD_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CMOD_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CMOD_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_LED_SLD0_ENABLED 1U
#define CYBSP_LED_SLD0_PORT GPIO_PRT5
#define CYBSP_LED_SLD0_PORT_NUM 5U
#define CYBSP_LED_SLD0_PIN 3U
#define CYBSP_LED_SLD0_NUM 3U
#define CYBSP_LED_SLD0_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define CYBSP_LED_SLD0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_5_pin_3_HSIOM
    #define ioss_0_port_5_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_LED_SLD0_HSIOM ioss_0_port_5_pin_3_HSIOM
#define CYBSP_LED_SLD0_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD0_HAL_PORT_PIN P5_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD0 P5_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD0_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_USER_LED (P5_5)
    #define CYBSP_USER_LED1 CYBSP_USER_LED
#endif //defined (CY_USING_HAL)
#define CYBSP_CSD_SLD0_ENABLED 1U
#define CYBSP_CSD_SLD0_PORT GPIO_PRT6
#define CYBSP_CSD_SLD0_PORT_NUM 6U
#define CYBSP_CSD_SLD0_PIN 0U
#define CYBSP_CSD_SLD0_NUM 0U
#define CYBSP_CSD_SLD0_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_SLD0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_0_HSIOM
    #define ioss_0_port_6_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD0_HSIOM ioss_0_port_6_pin_0_HSIOM
#define CYBSP_CSD_SLD0_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD0_HAL_PORT_PIN P6_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD0 P6_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD0_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_CSD_SLD1_ENABLED 1U
#define CYBSP_CSD_SLD1_PORT GPIO_PRT6
#define CYBSP_CSD_SLD1_PORT_NUM 6U
#define CYBSP_CSD_SLD1_PIN 1U
#define CYBSP_CSD_SLD1_NUM 1U
#define CYBSP_CSD_SLD1_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_SLD1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_1_HSIOM
    #define ioss_0_port_6_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD1_HSIOM ioss_0_port_6_pin_1_HSIOM
#define CYBSP_CSD_SLD1_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD1_HAL_PORT_PIN P6_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD1 P6_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD1_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_CSD_SLD3_ENABLED 1U
#define CYBSP_CSD_SLD3_PORT GPIO_PRT6
#define CYBSP_CSD_SLD3_PORT_NUM 6U
#define CYBSP_CSD_SLD3_PIN 2U
#define CYBSP_CSD_SLD3_NUM 2U
#define CYBSP_CSD_SLD3_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_SLD3_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_2_HSIOM
    #define ioss_0_port_6_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD3_HSIOM ioss_0_port_6_pin_2_HSIOM
#define CYBSP_CSD_SLD3_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD3_HAL_PORT_PIN P6_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD3 P6_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD3_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD3_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD3_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_CSD_SLD4_ENABLED 1U
#define CYBSP_CSD_SLD4_PORT GPIO_PRT6
#define CYBSP_CSD_SLD4_PORT_NUM 6U
#define CYBSP_CSD_SLD4_PIN 3U
#define CYBSP_CSD_SLD4_NUM 3U
#define CYBSP_CSD_SLD4_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_SLD4_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_3_HSIOM
    #define ioss_0_port_6_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD4_HSIOM ioss_0_port_6_pin_3_HSIOM
#define CYBSP_CSD_SLD4_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD4_HAL_PORT_PIN P6_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD4 P6_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD4_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD4_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD4_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_USB_DP_ENABLED 1U
#define CYBSP_USB_DP_PORT GPIO_PRT8
#define CYBSP_USB_DP_PORT_NUM 8U
#define CYBSP_USB_DP_PIN 0U
#define CYBSP_USB_DP_NUM 0U
#define CYBSP_USB_DP_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_USB_DP_INIT_DRIVESTATE 1
#ifndef ioss_0_port_8_pin_0_HSIOM
    #define ioss_0_port_8_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_USB_DP_HSIOM ioss_0_port_8_pin_0_HSIOM
#define CYBSP_USB_DP_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_USB_DP_HAL_PORT_PIN P8_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_USB_DP P8_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_USB_DP_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_USB_DP_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_USB_DP_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_USB_DM_ENABLED 1U
#define CYBSP_USB_DM_PORT GPIO_PRT8
#define CYBSP_USB_DM_PORT_NUM 8U
#define CYBSP_USB_DM_PIN 1U
#define CYBSP_USB_DM_NUM 1U
#define CYBSP_USB_DM_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_USB_DM_INIT_DRIVESTATE 1
#ifndef ioss_0_port_8_pin_1_HSIOM
    #define ioss_0_port_8_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_USB_DM_HSIOM ioss_0_port_8_pin_1_HSIOM
#define CYBSP_USB_DM_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_USB_DM_HAL_PORT_PIN P8_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_USB_DM P8_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_USB_DM_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_USB_DM_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_USB_DM_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD2_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSD_SLD2_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_SWDCK_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_SWDIO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_LED_SLD4_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_LED_SLD4_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_LED_SLD1_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_LED_SLD1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_LED_SLD2_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_LED_SLD2_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_LED_SLD3_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_LED_SLD3_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_BTN0_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSD_BTN0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_BTN1_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSD_BTN1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_LED_BTN1_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_LED_BTN1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_LED_BTN0_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_LED_BTN0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CMOD_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CMOD_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_LED_SLD0_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_LED_SLD0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD0_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSD_SLD0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD1_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSD_SLD1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD3_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSD_SLD3_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD4_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSD_SLD4_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_USB_DP_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_USB_DP_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_USB_DM_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_USB_DM_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
