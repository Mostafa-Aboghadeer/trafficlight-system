/*
 * timer_private.h
 *
 * Created: 9/13/2022 4:14:48 PM
 *  Author: darsh
 */ 


#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

#define TCCR0 *((volatile uint8_t *)0x53)
#define TCNT0 *((volatile uint8_t *)0x52)
#define TIFR *((volatile uint8_t *)0x58)




#endif /* TIMER_PRIVATE_H_ */