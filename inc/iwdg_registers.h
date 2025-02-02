/*
 * iwdg_registers.h
 *
 *  Created on: 09 mar. 2023
 *      Author: Ludo
 */

#ifndef __IWDG_REGISTERS_H__
#define __IWDG_REGISTERS_H__

#include "types.h"

/*** IWDG REGISTERS macros ***/

// Peripheral base address.
#define IWDG    ((IWDG_registers_t*) ((uint32_t) 0x40003000))

/*** IWDG REGISTERS structures ***/

/*!******************************************************************
 * \enum IWDG_registers_t
 * \brief IWDG registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t KR;
    volatile uint32_t PR;
    volatile uint32_t RLR;
    volatile uint32_t SR;
    volatile uint32_t WINR;
} IWDG_registers_t;

#endif /* __IWDG_REGISTERS_H__ */
