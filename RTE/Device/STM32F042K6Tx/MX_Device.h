/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 26/03/2019 15:54:26
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            40000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            8000000
#define MX_HSE_VALUE                            8000000
#define MX_HSI14_VALUE                          14000000
#define MX_HSI48_VALUE                          48000000
#define MX_PLLCLKFreq_Value                     16000000
#define MX_PLLMCOFreq_Value                     16000000
#define MX_SYSCLKFreq_VALUE                     48000000
#define MX_HCLKFreq_Value                       48000000
#define MX_MCOFreq_Value                        48000000
#define MX_FCLKCortexFreq_Value                 48000000
#define MX_TimSysFreq_Value                     48000000
#define MX_AHBFreq_Value                        48000000
#define MX_APB1Freq_Value                       48000000
#define MX_APB1TimFreq_Value                    48000000
#define MX_ADCoutputFreq_Value                  14000000
#define MX_FLITFCLKFreq_Value                   8000000
#define MX_CECFreq_Value                        32786
#define MX_I2C1Freq_Value                       8000000
#define MX_I2SFreq_Value                        48000000
#define MX_USART1Freq_Value                     48000000
#define MX_USART2Freq_Value                     48000000
#define MX_RTCFreq_Value                        40000
#define MX_RTCHSEDivFreq_Value                  250000
#define MX_USBFreq_Value                        48000000
#define MX_WatchDogFreq_Value                   40000
#define MX_VCOOutput2Freq_Value                 8000000

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- TIM1       --------------------------------*/

#define MX_TIM1                                 1

/* GPIO Configuration */

/* Pin PA8 */
#define MX_S_TIM1_CH1_GPIO_ModeDefaultPP        GPIO_MODE_AF_PP
#define MX_S_TIM1_CH1_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_S_TIM1_CH1_Pin_Remapping             __NULL
#define MX_S_TIM1_CH1_Pin                       PA8
#define MX_S_TIM1_CH1_GPIOx                     GPIOA
#define MX_S_TIM1_CH1_GPIO_PuPd                 GPIO_NOPULL
#define MX_S_TIM1_CH1_GPIO_Pin                  GPIO_PIN_8
#define MX_S_TIM1_CH1_GPIO_AF                   GPIO_AF2_TIM1

/*-------------------------------- TIM2       --------------------------------*/

#define MX_TIM2                                 1

/* GPIO Configuration */

/* Pin PA1 */
#define MX_S_TIM2_CH2_GPIO_ModeDefaultPP        GPIO_MODE_AF_PP
#define MX_S_TIM2_CH2_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_S_TIM2_CH2_Pin_Remapping             __NULL
#define MX_S_TIM2_CH2_Pin                       PA1
#define MX_S_TIM2_CH2_GPIOx                     GPIOA
#define MX_S_TIM2_CH2_GPIO_PuPd                 GPIO_NOPULL
#define MX_S_TIM2_CH2_GPIO_Pin                  GPIO_PIN_1
#define MX_S_TIM2_CH2_GPIO_AF                   GPIO_AF2_TIM2

/* Pin PA0 */
#define MX_S_TIM2_CH1_ETR_GPIO_ModeDefaultPP    GPIO_MODE_AF_PP
#define MX_S_TIM2_CH1_ETR_GPIO_Speed            GPIO_SPEED_FREQ_LOW
#define MX_S_TIM2_CH1_ETR_Pin_Remapping         __NULL
#define MX_S_TIM2_CH1_ETR_Pin                   PA0
#define MX_S_TIM2_CH1_ETR_GPIOx                 GPIOA
#define MX_S_TIM2_CH1_ETR_GPIO_PuPd             GPIO_NOPULL
#define MX_S_TIM2_CH1_ETR_GPIO_Pin              GPIO_PIN_0
#define MX_S_TIM2_CH1_ETR_GPIO_AF               GPIO_AF2_TIM2

/*-------------------------------- TIM3       --------------------------------*/

#define MX_TIM3                                 1

/* GPIO Configuration */

/* Pin PA6 */
#define MX_S_TIM3_CH1_GPIO_ModeDefaultPP        GPIO_MODE_AF_PP
#define MX_S_TIM3_CH1_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_S_TIM3_CH1_Pin_Remapping             __NULL
#define MX_S_TIM3_CH1_Pin                       PA6
#define MX_S_TIM3_CH1_GPIOx                     GPIOA
#define MX_S_TIM3_CH1_GPIO_PuPd                 GPIO_NOPULL
#define MX_S_TIM3_CH1_GPIO_Pin                  GPIO_PIN_6
#define MX_S_TIM3_CH1_GPIO_AF                   GPIO_AF1_TIM3

/* Pin PA7 */
#define MX_S_TIM3_CH2_GPIO_ModeDefaultPP        GPIO_MODE_AF_PP
#define MX_S_TIM3_CH2_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_S_TIM3_CH2_Pin_Remapping             __NULL
#define MX_S_TIM3_CH2_Pin                       PA7
#define MX_S_TIM3_CH2_GPIOx                     GPIOA
#define MX_S_TIM3_CH2_GPIO_PuPd                 GPIO_NOPULL
#define MX_S_TIM3_CH2_GPIO_Pin                  GPIO_PIN_7
#define MX_S_TIM3_CH2_GPIO_AF                   GPIO_AF1_TIM3

/*-------------------------------- TIM14      --------------------------------*/

#define MX_TIM14                                1

/* GPIO Configuration */

/*-------------------------------- USART2     --------------------------------*/

#define MX_USART2                               1

#define MX_USART2_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PA2 */
#define MX_USART2_TX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART2_TX_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_USART2_TX_Pin_Remapping              __NULL
#define MX_USART2_TX_Pin                        PA2
#define MX_USART2_TX_GPIOx                      GPIOA
#define MX_USART2_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART2_TX_GPIO_Pin                   GPIO_PIN_2
#define MX_USART2_TX_GPIO_AF                    GPIO_AF1_USART2

/* Pin PA3 */
#define MX_USART2_RX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART2_RX_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_USART2_RX_Pin_Remapping              __NULL
#define MX_USART2_RX_Pin                        PA3
#define MX_USART2_RX_GPIOx                      GPIOA
#define MX_USART2_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART2_RX_GPIO_Pin                   GPIO_PIN_3
#define MX_USART2_RX_GPIO_AF                    GPIO_AF1_USART2

/* NVIC Configuration */

/* NVIC USART2_IRQn */
#define MX_USART2_IRQn_interruptPremptionPriority 0
#define MX_USART2_IRQn_Subriority               0

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PB3 */
#define MX_PB3_Pin_Remapping                    __NULL
#define MX_PB3_Pin                              PB3
#define MX_PB3_GPIOx                            GPIOB
#define MX_PB3_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB3_GPIO_Pin                         GPIO_PIN_3
#define MX_PB3_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PA4 */
#define MX_PA4_Pin_Remapping                    __NULL
#define MX_PA4_Pin                              PA4
#define MX_PA4_GPIOx                            GPIOA
#define MX_PA4_GPIO_PuPd                        GPIO_NOPULL
#define MX_PA4_GPIO_Pin                         GPIO_PIN_4
#define MX_PA4_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PB5 */
#define MX_PB5_Pin_Remapping                    __NULL
#define MX_PB5_Pin                              PB5
#define MX_PB5_GPIOx                            GPIOB
#define MX_PB5_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB5_GPIO_Pin                         GPIO_PIN_5
#define MX_PB5_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PB4 */
#define MX_PB4_Pin_Remapping                    __NULL
#define MX_PB4_Pin                              PB4
#define MX_PB4_GPIOx                            GPIOB
#define MX_PB4_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB4_GPIO_Pin                         GPIO_PIN_4
#define MX_PB4_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PB7 */
#define MX_PB7_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PB7_Pin_Remapping                    __NULL
#define MX_PB7_Pin                              PB7
#define MX_PB7_GPIOx                            GPIOB
#define MX_PB7_PinState                         GPIO_PIN_RESET
#define MX_PB7_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB7_GPIO_Pin                         GPIO_PIN_7
#define MX_PB7_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP
#define MX_PB7_GPIO_FM7                         __NULL

/* Pin PB6 */
#define MX_PB6_Pin_Remapping                    __NULL
#define MX_PB6_Pin                              PB6
#define MX_PB6_GPIOx                            GPIOB
#define MX_PB6_GPIO_PuPd                        GPIO_PULLUP
#define MX_PB6_GPIO_Pin                         GPIO_PIN_6
#define MX_PB6_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PA9 */
#define MX_PA9_Pin_Remapping                    __NULL
#define MX_PA9_Pin                              PA9
#define MX_PA9_GPIOx                            GPIOA
#define MX_PA9_GPIO_PuPd                        GPIO_NOPULL
#define MX_PA9_GPIO_Pin                         GPIO_PIN_9
#define MX_PA9_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PA15 */
#define MX_PA15_Pin_Remapping                   __NULL
#define MX_PA15_Pin                             PA15
#define MX_PA15_GPIOx                           GPIOA
#define MX_PA15_GPIO_PuPd                       GPIO_NOPULL
#define MX_PA15_GPIO_Pin                        GPIO_PIN_15
#define MX_PA15_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PA11 */
#define MX_PA11_Pin_Remapping                   __NULL
#define MX_PA11_Pin                             PA11
#define MX_PA11_GPIOx                           GPIOA
#define MX_PA11_GPIO_PuPd                       GPIO_NOPULL
#define MX_PA11_GPIO_Pin                        GPIO_PIN_11
#define MX_PA11_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PA10 */
#define MX_PA10_Pin_Remapping                   __NULL
#define MX_PA10_Pin                             PA10
#define MX_PA10_GPIOx                           GPIOA
#define MX_PA10_GPIO_PuPd                       GPIO_NOPULL
#define MX_PA10_GPIO_Pin                        GPIO_PIN_10
#define MX_PA10_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PA12 */
#define MX_PA12_Pin_Remapping                   __NULL
#define MX_PA12_Pin                             PA12
#define MX_PA12_GPIOx                           GPIOA
#define MX_PA12_GPIO_PuPd                       GPIO_NOPULL
#define MX_PA12_GPIO_Pin                        GPIO_PIN_12
#define MX_PA12_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PB1 */
#define MX_PB1_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PB1_Pin_Remapping                    __NULL
#define MX_PB1_Pin                              PB1
#define MX_PB1_GPIOx                            GPIOB
#define MX_PB1_PinState                         GPIO_PIN_RESET
#define MX_PB1_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB1_GPIO_Pin                         GPIO_PIN_1
#define MX_PB1_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PB0 */
#define MX_PB0_Pin_Remapping                    __NULL
#define MX_PB0_Pin                              PB0
#define MX_PB0_GPIOx                            GPIOB
#define MX_PB0_GPIO_PuPd                        GPIO_PULLUP
#define MX_PB0_GPIO_Pin                         GPIO_PIN_0
#define MX_PB0_GPIO_Mode                        GPIO_MODE_INPUT

#endif  /* __MX_DEVICE_H */