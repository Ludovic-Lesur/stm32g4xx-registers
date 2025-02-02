/*
 * tim_registers.h
 *
 *  Created on: 31 dec. 2022
 *      Author: Ludo
 */

#ifndef __TIM_REGISTERS_H__
#define __TIM_REGISTERS_H__

#ifndef STM32G4XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32g4xx_registers_flags.h"
#endif
#include "types.h"

/*** TIM REGISTERS macros ***/

// Peripherals base address.
#define TIM1    ((TIM_registers_t*) ((uint32_t) 0x40012C00))
#define TIM2    ((TIM_registers_t*) ((uint32_t) 0x40000000))
#define TIM3    ((TIM_registers_t*) ((uint32_t) 0x40000400))
#define TIM4    ((TIM_registers_t*) ((uint32_t) 0x40000800))
#if (STM32G4XX_REGISTERS_MCU_CATEGORY == 3)
#define TIM5    ((TIM_registers_t*) ((uint32_t) 0x40000C00))
#endif
#define TIM6    ((TIM_registers_t*) ((uint32_t) 0x40001000))
#define TIM7    ((TIM_registers_t*) ((uint32_t) 0x40001400))
#define TIM8    ((TIM_registers_t*) ((uint32_t) 0x40013400))
#define TIM15   ((TIM_registers_t*) ((uint32_t) 0x40014000))
#define TIM16   ((TIM_registers_t*) ((uint32_t) 0x40014400))
#define TIM17   ((TIM_registers_t*) ((uint32_t) 0x40014800))
#if ((STM32G4XX_REGISTERS_MCU_CATEGORY == 3) || (STM32G4XX_REGISTERS_MCU_CATEGORY == 4))
#define TIM20   ((TIM_registers_t*) ((uint32_t) 0x40015000))
#endif

/*** TIM REGISTERS structures ***/

/*!******************************************************************
 * \enum TIM_registers_t
 * \brief TIM registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CR1;
    volatile uint32_t CR2;
    volatile uint32_t SMCR;
    volatile uint32_t DIER;
    volatile uint32_t SR;
    volatile uint32_t EGR;
    volatile uint32_t CCMR1;
    volatile uint32_t CCMR2;
    volatile uint32_t CCER;
    volatile uint32_t CNT;
    volatile uint32_t PSC;
    volatile uint32_t ARR;
    volatile uint32_t RCR;
    union {
        struct {
            volatile uint32_t CCR1;
            volatile uint32_t CCR2;
            volatile uint32_t CCR3;
            volatile uint32_t CCR4;
        };
        volatile uint32_t CCRx[4];
    };
    volatile uint32_t BDTR;
    volatile uint32_t CCR5;
    volatile uint32_t CCR6;
    volatile uint32_t CCMR3;
    volatile uint32_t DTR2;
    volatile uint32_t ECR;
    volatile uint32_t TISEL;
    volatile uint32_t AF1;
    volatile uint32_t AF2;
    volatile uint32_t OR;
    volatile uint32_t RESERVED[220];
    volatile uint32_t DCR;
    volatile uint32_t DMAR;
} TIM_registers_t;

#endif /* __TIM_REGISTERS_H__ */
