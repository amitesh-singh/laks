#ifndef PWR_H
#define PWR_H

#include <stdint.h>

#if defined(STM32L1)

struct PWR_t {
	volatile uint32_t CR;
	volatile uint32_t CSR;
};

static PWR_t& PWR = *(PWR_t*)0x40007000;

#endif

#endif
