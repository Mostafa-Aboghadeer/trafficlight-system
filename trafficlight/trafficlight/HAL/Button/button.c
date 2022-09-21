/*
 * button.c
 *
 * Created: 9/13/2022 2:29:13 AM
 *  Author: darsh
 */ 
#include "../../lib/types.h"
#include "../../lib/bit_math.h"
#include "button.h"
#include "../../MCAL/dio/dio_interface.h"
void button_init(uint8_t buttonport,uint8_t buttonpin)
{
	DIO_init(buttonport,buttonpin,IN);
}
void button_get_state(uint8_t buttonport,uint8_t buttonpin, uint8_t *val)
{
	DIO_read(buttonport,buttonpin,val);
}