/*
 * lpuart_registers.h
 *
 *  Created on: 09 mar. 2023
 *      Author: Ludo
 */

#ifndef __LPUART_REGISTERS_H__
#define __LPUART_REGISTERS_H__

#include "types.h"

/*** LPUART REGISTERS macros ***/

// Peripheral base address.
#define LPUART1     ((LPUART_registers_t*) ((uint32_t) 0x40008000))

/*** LPUART REGISTERS structures ***/

/*!******************************************************************
 * \enum LPUART_registers_t
 * \brief LPUART registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CR1;
    volatile uint32_t CR2;
    volatile uint32_t CR3;
    volatile uint32_t BRR;
    volatile uint32_t RESERVED0[2];
    volatile uint32_t RQR;
    volatile uint32_t ISR;
    volatile uint32_t ICR;
    volatile uint32_t RDR;
    volatile uint32_t TDR;
    volatile uint32_t PRESC;
} LPUART_registers_t;

#endif /* __LPUART_REGISTERS_H__ */
