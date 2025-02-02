/*
 * dma_registers.h
 *
 *  Created on: 18 jun. 2023
 *      Author: Ludo
 */

#ifndef __DMA_REGISTERS_H__
#define __DMA_REGISTERS_H__

#include "types.h"

/*** DMA REGISTERS macros ***/

// Peripherals base address.
#define DMA1    ((DMA_registers_t*) ((uint32_t) 0x40020000))
#define DMA2    ((DMA_registers_t*) ((uint32_t) 0x40020400))

/*** DMA REGISTERS structures ***/

/*!******************************************************************
 * \enum DMA_channel_registers_t
 * \brief DMA channel registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CCR;
    volatile uint32_t CNDTR;
    volatile uint32_t CPAR;
    volatile uint32_t CMAR;
    volatile uint32_t RESERVED;
} DMA_channel_registers_t;

/*!******************************************************************
 * \enum DMA_registers_t
 * \brief DMA registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t ISR;
    volatile uint32_t IFCR;
    volatile DMA_channel_registers_t CHx[8];
} DMA_registers_t;

#endif /* __DMA_REGISTERS_H__ */
