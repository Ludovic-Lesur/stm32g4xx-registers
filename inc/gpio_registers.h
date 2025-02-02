/*
 * gpio_registers.h
 *
 *  Created on: 31 dec. 2022
 *      Author: Ludo
 */

#ifndef __GPIO_REGISTERS_H__
#define __GPIO_REGISTERS_H__

#include "types.h"

/*** GPIO REGISTERS macros ***/

// Peripherals base address.
#define GPIOA   ((GPIO_registers_t*) ((uint32_t) 0x48000000))
#define GPIOB   ((GPIO_registers_t*) ((uint32_t) 0x48000400))
#define GPIOC   ((GPIO_registers_t*) ((uint32_t) 0x48000800))
#define GPIOD   ((GPIO_registers_t*) ((uint32_t) 0x48000C00))
#define GPIOE   ((GPIO_registers_t*) ((uint32_t) 0x48001000))
#define GPIOF   ((GPIO_registers_t*) ((uint32_t) 0x48001400))
#define GPIOG   ((GPIO_registers_t*) ((uint32_t) 0x48001800))

/*** GPIO REGISTERS structures ***/

/*!******************************************************************
 * \enum GPIO_registers_t
 * \brief GPIO registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t MODER;
    volatile uint32_t OTYPER;
    volatile uint32_t OSPEEDR;
    volatile uint32_t PUPDR;
    volatile uint32_t IDR;
    volatile uint32_t ODR;
    volatile uint32_t BSRR;
    volatile uint32_t LCKR;
    volatile uint32_t AFRL;
    volatile uint32_t AFRH;
    volatile uint32_t BRR;
} GPIO_registers_t;

#endif /* __GPIO_REGISTERS_H__ */
