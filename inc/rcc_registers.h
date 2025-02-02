/*
 * rcc_registers.h
 *
 *  Created on: 31 dec. 2022
 *      Author: Ludo
 */

#ifndef __RCC_REGISTERS_H__
#define __RCC_REGISTERS_H__

#include "types.h"

/*** RCC REGISTERS macros ***/

// Peripheral base address.
#define RCC     ((RCC_registers_t*) ((uint32_t) 0x40021000))

/*** RCC REGISTERS structures ***/

/*!******************************************************************
 * \enum RCC_registers_t
 * \brief RCC registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CR;
    volatile uint32_t ICSCR;
    volatile uint32_t CFGR;
    volatile uint32_t PLLCFGR;
    volatile uint32_t RESERVED0[2];
    volatile uint32_t CIER;
    volatile uint32_t CIFR;
    volatile uint32_t CICR;
    volatile uint32_t RESERVED1;
    volatile uint32_t AHB1RSTR;
    volatile uint32_t AHB2RSTR;
    volatile uint32_t AHB3RSTR;
    volatile uint32_t RESERVED2;
    volatile uint32_t APB1RSTR1;
    volatile uint32_t APB1RSTR2;
    volatile uint32_t APB2RSTR;
    volatile uint32_t RESERVED3;
    volatile uint32_t AHB1ENR;
    volatile uint32_t AHB2ENR;
    volatile uint32_t AHB3ENR;
    volatile uint32_t RESERVED4;
    volatile uint32_t APB1ENR1;
    volatile uint32_t APB1ENR2;
    volatile uint32_t APB2ENR;
    volatile uint32_t RESERVED5;
    volatile uint32_t AHB1SMENR;
    volatile uint32_t AHB2SMENR;
    volatile uint32_t AHB3SMENR;
    volatile uint32_t RESERVED6;
    volatile uint32_t APB1SMENR1;
    volatile uint32_t APB1SMENR2;
    volatile uint32_t APB2SMENR;
    volatile uint32_t RESERVED7;
    volatile uint32_t CCIPR;
    volatile uint32_t RESERVED8;
    volatile uint32_t BDCR;
    volatile uint32_t CSR;
    volatile uint32_t CRRCR;
    volatile uint32_t CCIPR2;
} RCC_registers_t;

#endif /* __RCC_REGISTERS_H__ */
