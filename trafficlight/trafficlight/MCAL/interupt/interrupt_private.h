/*
 * interrupt_private.h
 *
 * Created: 9/13/2022 7:59:58 PM
 *  Author: darsh
 */ 


#ifndef INTERRUPT_PRIVATE_H_
#define INTERRUPT_PRIVATE_H_
#include "../../lib/types.h"

#define MCUCR *((volatile uint8_t *)0x55)
#define MCUCSR *((volatile uint8_t *)0x54)
#define GICR *((volatile uint8_t *)0x5B)
#define GIFR *((volatile uint8_t *)0x5A)
#define SREG *((volatile uint8_t *)0x5f)






#endif /* INTERRUPT_PRIVATE_H_ */