#pragma once
#include <stdint.h>

struct AFIO_t {
	volatile uint32_t EVCR;
	volatile uint32_t MAPR;
	volatile uint32_t EXTICR[4];
	volatile uint32_t MAPR2;
};

#if defined(STM32F1)
static AFIO_t& AFIO = *(AFIO_t*)0x40010000;
#else
#error "Your target doesn't have an AFIO map!"
#endif
