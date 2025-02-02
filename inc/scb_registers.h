/*
 * scb_registers.h
 *
 *  Created on: 31 dec. 2022
 *      Author: Ludo
 */

#ifndef __SCB_REGISTERS_H__
#define __SCB_REGISTERS_H__

#include "types.h"

/*** SCB REGISTERS macros ***/

// Peripheral base address.
#define SCB     ((SCB_registers_t*) ((uint32_t) 0xE000ED00))

/*** SCB REGISTERS structures ***/

/*!******************************************************************
 * \enum SCB_registers_t
 * \brief SCB registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CPUID;
    volatile uint32_t ICSR;
    volatile uint32_t VTOR;
    volatile uint32_t AIRCR;
    volatile uint32_t SCR;
    volatile uint32_t CCR;
    volatile uint32_t SHPR1;
    volatile uint32_t SHPR2;
    volatile uint32_t SHPR3;
    volatile uint32_t SHCRS;
    volatile uint32_t CFSR;
    volatile uint32_t HFSR;
    volatile uint32_t RESERVED;
    volatile uint32_t MMAR;
    volatile uint32_t BFAR;
    volatile uint32_t AFSR;
} SCB_registers_t;

#endif /* __SCB_REGISTERS_H__ */
