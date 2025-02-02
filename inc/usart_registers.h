/*
 * usart_registers.h
 *
 *  Created on: 31 dec. 2022
 *      Author: Ludo
 */

#ifndef __USART_REGISTERS_H__
#define __USART_REGISTERS_H__

#ifndef STM32G4XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32g4xx_registers_flags.h"
#endif
#include "types.h"

/*** USART REGISTERS macros ***/

// Peripherals base address.
#define USART1  ((USART_registers_t*) ((uint32_t) 0x40013800))
#define USART2  ((USART_registers_t*) ((uint32_t) 0x40004400))
#define USART3  ((USART_registers_t*) ((uint32_t) 0x40004800))
#define UART4   ((USART_registers_t*) ((uint32_t) 0x40004C00))
#if ((STM32G4XX_REGISTERS_MCU_CATEGORY == 3) || (STM32G4XX_REGISTERS_MCU_CATEGORY == 4))
#define UART5   ((USART_registers_t*) ((uint32_t) 0x40005000))
#endif

/*** USART REGISTERS structures ***/

/*!******************************************************************
 * \enum USART_registers_t
 * \brief USART registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CR1;
    volatile uint32_t CR2;
    volatile uint32_t CR3;
    volatile uint32_t BRR;
    volatile uint32_t GTPR;
    volatile uint32_t RTOR;
    volatile uint32_t RQR;
    volatile uint32_t ISR;
    volatile uint32_t ICR;
    volatile uint32_t RDR;
    volatile uint32_t TDR;
    volatile uint32_t PRESC;
} USART_registers_t;

#endif /* __USART_REGISTERS_H__ */
