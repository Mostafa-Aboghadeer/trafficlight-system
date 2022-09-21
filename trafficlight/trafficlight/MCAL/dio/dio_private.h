/*
 * dio_private.h
 *
 * Created: 9/12/2022 5:51:27 PM
 *  Author: darsh
 */ 


#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_
#include "../../lib/types.h"
typedef struct 
{
	uint8_t PIN;
	uint8_t DDR;
	uint8_t PORT;
		
	}PORT_t;
#define	PORTA ((volatile PORT_t*)0x39)
#define  PORTB ((volatile PORT_t*)0x36)
#define  PORTC ((volatile PORT_t*)0x33)
#define  PORTD ((volatile PORT_t*)0x30)




 



#endif /* DIO_PRIVATE_H_ */