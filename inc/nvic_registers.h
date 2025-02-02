/*
 * nvic_registers.h
 *
 *  Created on: 31 dec. 2022
 *      Author: Ludo
 */

#ifndef __NVIC_REGISTERS_H__
#define __NVIC_REGISTERS_H__

#include "types.h"

/*** NVIC REGISTERS macros ***/

// Peripheral base address.
#define NVIC    ((NVIC_registers_t*) ((uint32_t) 0xE000E100))

/*** NVIC REGISTERS structures ***/

/*!******************************************************************
 * \enum NVIC_registers_t
 * \brief NVIC registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t ISER[3];
    volatile uint32_t RESERVED0[29];
    volatile uint32_t ICER[3];
    volatile uint32_t RESERVED1[29];
    volatile uint32_t ISPR[3];
    volatile uint32_t RESERVED2[29];
    volatile uint32_t ICPR[3];
    volatile uint32_t RESERVED3[29];
    volatile uint32_t IABR[3];
    volatile uint32_t RESERVED4[61];
    volatile uint32_t IPR[21];
    volatile uint32_t RESERVED5[683];
    volatile uint32_t STIR;
} NVIC_registers_t;

#endif /* __NVIC_REGISTERS_H__ */
