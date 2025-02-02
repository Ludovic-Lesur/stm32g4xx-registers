/*
 * dmamux_registers.h
 *
 *  Created on: 18 jun. 2023
 *      Author: Ludo
 */

#ifndef __DMAMUX_REGISTERS_H__
#define __DMAMUX_REGISTERS_H__

#include "types.h"

/*** DMAMUX REGISTERS macros ***/

// Peripheral base address.
#define DMAMUX  ((DMAMUX_registers_t*) ((uint32_t) 0x40020800))

/*** DMAMUX REGISTERS structures ***/

/*!******************************************************************
 * \enum DMAMUX_registers_t
 * \brief DMAMUX registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CxCR[16];
    volatile uint32_t RESERVED0[16];
    volatile uint32_t CSR;
    volatile uint32_t CCFR;
    volatile uint32_t RESERVED1[30];
    volatile uint32_t RGxCR[4];
    volatile uint32_t RESERVED2[12];
    volatile uint32_t RGSR;
    volatile uint32_t RGCFR;
} DMAMUX_registers_t;

#endif /* __DMAMUX_REGISTERS_H__ */
