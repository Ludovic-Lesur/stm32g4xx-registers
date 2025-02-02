/*
 * exti_registers.h
 *
 *  Created on: 09 mar. 2023
 *      Author: Ludo
 */

#ifndef __EXTI_REGISTERS_H__
#define __EXTI_REGISTERS_H__

/*** EXTI REGISTERS macros ***/

// Peripheral base address.
#define EXTI    ((EXTI_registers_t*) ((uint32_t) 0x40010400))

/*** EXTI REGISTERS structures ***/

/*!******************************************************************
 * \enum EXTI_registers_pattern_t
 * \brief EXTI registers map pattern.
 *******************************************************************/
typedef struct {
    volatile uint32_t IMR;
    volatile uint32_t EMR;
    volatile uint32_t RTSR;
    volatile uint32_t FTSR;
    volatile uint32_t SWIER;
    volatile uint32_t PR;
    volatile uint32_t RESERVED[2];
} EXTI_registers_pattern_t;

/*!******************************************************************
 * \enum EXTI_registers_t
 * \brief EXTI registers map.
 *******************************************************************/
typedef struct {
    volatile EXTI_registers_pattern_t EXTIx[2];
} EXTI_registers_t;

#endif /* __EXTI_REGISTERS_H__ */
