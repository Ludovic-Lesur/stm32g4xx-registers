/*
 * pwr_registers.h
 *
 *  Created on: 09 mar 2023
 *      Author: Ludo
 */

#ifndef __PWR_REGISTERS_H__
#define __PWR_REGISTERS_H__

#include "types.h"

/*** PWR REGISTERS macros ***/

// Peripheral base address.
#define PWR     ((PWR_registers_t*) ((uint32_t) 0x40007000))

/*** PWR REGISTERS structures ***/

/*!******************************************************************
 * \enum PWR_registers_t
 * \brief PWR registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CR1;
    volatile uint32_t CR2;
    volatile uint32_t CR3;
    volatile uint32_t CR4;
    volatile uint32_t SR1;
    volatile uint32_t SR2;
    volatile uint32_t SCR;
    volatile uint32_t RESERVED0;
    volatile uint32_t PUCRA;
    volatile uint32_t PDCRA;
    volatile uint32_t PUCRB;
    volatile uint32_t PDCRB;
    volatile uint32_t PUCRC;
    volatile uint32_t PDCRC;
    volatile uint32_t PUCRD;
    volatile uint32_t PDCRD;
    volatile uint32_t PUCRE;
    volatile uint32_t PDCRE;
    volatile uint32_t PUCRF;
    volatile uint32_t PDCRF;
    volatile uint32_t PUCRG;
    volatile uint32_t PDCRG;
    volatile uint32_t RESERVED1[10];
    volatile uint32_t CR5;
} PWR_registers_t;

#endif /* __PWR_REGISTERS_H__ */
