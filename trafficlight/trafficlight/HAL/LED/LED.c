/*
 * LED.c
 *
 * Created: 9/13/2022 1:12:58 AM
 *  Author: darsh
 */ 
#include "../../lib/types.h"
#include "../../lib/bit_math.h"
#include "LED.h"
#include "../../MCAL/dio/dio_interface.h"

void LED_init (uint8_t LEDport, uint8_t LEDpin)
{
	DIO_init(LEDport,LEDpin,OUT);
}
void LED_on (uint8_t LEDport, uint8_t LEDpin)
{
	DIO_write(LEDport,LEDpin,HIGH);
}
void LED_off (uint8_t LEDport, uint8_t LEDpin)
{
		DIO_write(LEDport,LEDpin,LOW);

}
void LED_toggle (uint8_t LEDport, uint8_t LEDpin)
{
	DIO_toggle(LEDport,LEDpin);
}