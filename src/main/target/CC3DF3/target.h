/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "CCF3" // CopterControl 3D F3

#define CONFIG_FASTLOOP_PREFERRED_ACC ACC_DEFAULT

#define LED0_PIN                PB3

#define BEEPER                  PA15
#define BEEPER_OPT              PA2

#define REMAP_TIM17_DMA
#define ENABLE_DSHOT_DMAR       true

// MPU6000 interrupts
#define USE_MPU_DATA_READY_SIGNAL
#define MPU_INT_EXTI                PA3
#define USE_EXTI

#define USE_GYRO
#define USE_ACC

#define USE_GYRO_SPI_MPU6000
#define GYRO_MPU6000_ALIGN      CW270_DEG
#define USE_ACC_SPI_MPU6000
#define ACC_MPU6000_ALIGN       CW270_DEG

#define MPU6000_CS_GPIO         GPIOA
#define MPU6000_CS_PIN          PA4
#define MPU6000_SPI_INSTANCE    SPI1

#define USE_VCP
#define USE_UART1
#define USE_UART3
#define USE_SOFTSERIAL1
#define USE_SOFTSERIAL2

#define SERIAL_PORT_COUNT       5

#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define UART3_TX_PIN            PB10 // PB10 (AF7)
#define UART3_RX_PIN            PB11 // PB11 (AF7)

#define USE_ADC
#define CURRENT_METER_ADC_PIN   PA1
#define VBAT_ADC_PIN            PA0

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2

#define SPI1_NSS_PIN            PA4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define SPI2_NSS_PIN            PB12
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

//#define USE_I2C
//#define USE_I2C_DEVICE_2        // Main port - SCL/PA9, SDA/PA10

//#define I2C2_SCL                PA9
//#define I2C2_SDA                PA10

#define USE_FLASHFS
#define USE_FLASH_M25P16

#define FLASH_SPI_INSTANCE      SPI2
#define FLASH_CS_PIN            PB12

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

// IO - stm32f303cc in 48pin package
#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         (BIT(13)|BIT(14)|BIT(15))
#define TARGET_IO_PORTF         (BIT(0)|BIT(1)|BIT(4))

#define USABLE_TIMER_CHANNEL_COUNT 12
#define USED_TIMERS             (TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4) | TIM_N(8) | TIM_N(16) | TIM_N(17))
