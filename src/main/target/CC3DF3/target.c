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

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"

#include "drivers/timer.h"
#include "drivers/timer_def.h"
#include "drivers/dma.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    DEF_TIM(TIM8,  CH1, PB6, TIM_USE_PPM,                 0), // S1_IN - PPM IN
    DEF_TIM(TIM3,  CH2, PB5, TIM_USE_PWM,                 0), // S2_IN - SoftSerial TX / Sonar trigger
    DEF_TIM(TIM3,  CH3, PB0, TIM_USE_PWM,                 0), // S3_IN - SoftSerial RX / Sonar echo / RSSI ADC
    DEF_TIM(TIM3,  CH4, PB1, TIM_USE_PWM,                 0), // S4_IN - Current
    DEF_TIM(TIM2,  CH1, PA0, TIM_USE_PWM,                 0), // S5_IN - Vbattery
    DEF_TIM(TIM2,  CH2, PA1, TIM_USE_PWM,                 0), // S6_IN - RSSI

	DEF_TIM(TIM17, CH1, PB9, TIM_USE_MOTOR,               1), // S1
    DEF_TIM(TIM4,  CH3, PB8, TIM_USE_MOTOR,               1), // S2
    DEF_TIM(TIM4,  CH2, PB7, TIM_USE_MOTOR,               1), // S3
    DEF_TIM(TIM1,  CH1, PA8, TIM_USE_MOTOR,               1), // S4
    DEF_TIM(TIM16, CH1, PB4, TIM_USE_MOTOR | TIM_USE_LED, 1), // S5 - LED Strip
    DEF_TIM(TIM2,  CH3, PA2, TIM_USE_MOTOR,               1), // S6
};
