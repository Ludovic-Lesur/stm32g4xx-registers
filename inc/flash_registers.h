/*
 * flash_registers.h
 *
 *  Created on: 31 dec. 2022
 *      Author: Ludo
 */

#ifndef __FLASH_REGISTERS_H__
#define __FLASH_REGISTERS_H__

#ifndef STM32G4XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32g4xx_registers_flags.h"
#endif
#include "types.h"

/*** FLASH REGISTERS macros ***/

// Peripheral base address.
#define FLASH   ((FLASH_registers_t*) ((uint32_t) 0x40022000))

/*** FLASH REGISTERS structures ***/

/*!******************************************************************
 * \enum FLASH_registers_t
 * \brief FLASH registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t ACR;
    volatile uint32_t PDKEYR;
    volatile uint32_t KEYR;
    volatile uint32_t OPTKEYR;
    volatile uint32_t SR;
    volatile uint32_t CR;
    volatile uint32_t ECCR;
    volatile uint32_t RESERVED0;
    volatile uint32_t OPTR;
    volatile uint32_t PCROP1SR;
    volatile uint32_t PCROP1ER;
    volatile uint32_t WRP1AR;
    volatile uint32_t WRP1BR;
#if (STM32G4XX_REGISTERS_MCU_CATEGORY == 3)
    volatile uint32_t RESERVED1[4];
    volatile uint32_t PCROP2SR;
    volatile uint32_t PCROP2ER;
    volatile uint32_t WRP2AR;
    volatile uint32_t WRP2BR;
    volatile uint32_t RESERVED2[7];
#else
    volatile uint32_t RESERVED1[15];
#endif
    volatile uint32_t SEC1R;
#if (STM32G4XX_REGISTERS_MCU_CATEGORY == 3)
    volatile uint32_t SEC2R;
#else
    volatile uint32_t RESERVED3;
#endif
} FLASH_registers_t;

#endif /* __FLASH_REGISTERS_H__ */
