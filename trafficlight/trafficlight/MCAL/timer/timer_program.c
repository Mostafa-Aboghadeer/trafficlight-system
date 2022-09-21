/*
 * timer_program.c
 *
 * Created: 9/13/2022 5:41:48 PM
 *  Author: darsh
 */ 
#include "../../lib/types.h"
#include "../../lib/bit_math.h"
#include "timer_interface.h"
#include "timer_private.h"
#define  final_overflows 19
uint8_t int_flag=0;
unsigned int overflow_counter=0;

void timer_init()
{
	TCCR0=0x00;
	TCNT0=0x00;
}
void timer_start()
{
	TCCR0|= (1<<2) |(1<<0); //prescale CLK/1024
}
void timer_stop()
{

	TCCR0=0x00;
}
void delay()
{
	timer_start();
	while (overflow_counter < final_overflows)
	{
		while((TIFR & (1<<0))==0);
		//SETBIT(TIFR,0);

		overflow_counter++;
			}
			overflow_counter=0;
		timer_stop();
}