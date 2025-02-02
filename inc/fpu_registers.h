/*
 * fpu_registers.h
 *
 *  Created on: 25 apr. 2024
 *      Author: Ludo
 */

#ifndef __FPU_REGISTERS_H__
#define __FPU_REGISTERS_H__

#include "types.h"

/*** FPU REGISTERS macros ***/

// Peripheral base address.
#define FPU     ((FPU_registers_t*) ((uint32_t) 0xE000ED88))

/*** FPU REGISTERS structures ***/

/*!******************************************************************
 * \enum FPU_registers_t
 * \brief FPU registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CPACR;
    volatile uint32_t RESERVED0[106];
    volatile uint32_t FPCCR;
    volatile uint32_t FPCAR;
    volatile uint32_t FPDSCR;
    volatile uint32_t FPSCR;
} FPU_registers_t;

#endif /* __FPU_REGISTERS_H__ */
