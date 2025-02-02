/*
 * rtc_registers.h
 *
 *  Created on: 02 jul. 2023
 *      Author: Ludo
 */

#ifndef __RTC_REGISTERS_H__
#define __RTC_REGISTERS_H__

#include "types.h"

/*** RTC REGISTERS macros ***/

// Peripheral base address.
#define RTC     ((RTC_registers_t*) ((uint32_t) 0x40002800))

/*** RTC REGISTERS structures ***/

/*!******************************************************************
 * \enum RTC_registers_t
 * \brief RTC registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t TR;
    volatile uint32_t DR;
    volatile uint32_t SSR;
    volatile uint32_t ICSR;
    volatile uint32_t PRER;
    volatile uint32_t WUTR;
    volatile uint32_t CR;
    volatile uint32_t RESERVED0[2];
    volatile uint32_t WPR;
    volatile uint32_t CALR;
    volatile uint32_t SHIFTR;
    volatile uint32_t TSTR;
    volatile uint32_t TSDR;
    volatile uint32_t TSSSR;
    volatile uint32_t RESERVED1;
    volatile uint32_t ALRMAR;
    volatile uint32_t ALRMASSR;
    volatile uint32_t ALRMBR;
    volatile uint32_t ALRMBSSR;
    volatile uint32_t SR;
    volatile uint32_t MISR;
    volatile uint32_t RESERVED2;
    volatile uint32_t SCR;
} RTC_registers_t;

#endif /* __RTC_REGISTERS_H__ */
