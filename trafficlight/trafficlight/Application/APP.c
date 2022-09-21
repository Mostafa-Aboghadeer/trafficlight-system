/*
 * APP.c
 *
 * Created: 9/13/2022 10:24:10 PM
 *  Author: darsh
 */ 
#include "APP.h"
#include "../MCAL/timer/timer_interface.h"
unsigned int street_state=0;
uint8_t red,yellow,green=0;

void app_start()
{	
	button_init(buttonport,buttonpin);
	LED_init('A',car_GREEN);
	LED_init('A',car_YELLOW);
	LED_init('A',car_RED);
	LED_init('B',pedestrian_GREEN);
	LED_init('A',pedestrian_YELLOW);
	LED_init('A',pedestrian_RED);
	ENB_GENERAL_INTERRUPT;
	timer_init();
	rising_edg();
	INT0_enb();
	
	while (1)
	
	{

		switch (street_state)
		
		{
			case 0:
			LED_on('A',car_GREEN);
			delay();
			LED_off('A',car_GREEN);
			LED_on('A',car_YELLOW);
			delay();
			LED_off('A',car_YELLOW);
			LED_on('A',car_RED);
			delay();
			LED_off('A',car_RED);
			break;
			case 1:
			LED_on('A',car_RED);
			LED_on('B',pedestrian_GREEN);
			delay();
			LED_off('A',car_RED);
			LED_on('A',car_YELLOW);
			LED_on('B',pedestrian_YELLOW);
			delay();
			LED_off('A',car_YELLOW);
			LED_off('B',pedestrian_YELLOW);
			LED_off('B',pedestrian_GREEN);
			LED_on('A',car_GREEN);
			LED_on('B',pedestrian_RED);
			delay();
			LED_off('B',pedestrian_RED);
			street_state=0;
			break;
			case 2:
			LED_on('B',pedestrian_RED);
			LED_on('A',car_GREEN);
			delay();
			LED_off('B',pedestrian_RED);
			LED_off('A',car_GREEN);
			LED_on('A',car_YELLOW);
			LED_on('B',pedestrian_YELLOW);
			delay();
			LED_off('A',car_YELLOW);
			LED_off('A',pedestrian_YELLOW);
			LED_on('A',car_RED);
			LED_on('B',pedestrian_GREEN);
			delay();
			LED_off('A',car_RED);
			LED_on('A',car_YELLOW);
			LED_on('B',pedestrian_YELLOW);
			delay();
			LED_off('A',car_YELLOW);
			LED_off('A',pedestrian_YELLOW);
			LED_off('B',pedestrian_GREEN);
			LED_on('A',car_GREEN);
			LED_on('B',pedestrian_RED);
			delay();
			LED_off('B',pedestrian_RED);
			street_state=0;
			break;
			default:
			break;
		}
		
		
	}
	
}
EXT_INT_0 (INT0_vect)
{
	DIO_read('A',car_RED,&red);
	DIO_read('A',car_YELLOW,&yellow);
	DIO_read('A',car_GREEN,&green);

	if (!red)
	{
		street_state=1;
	}
	else if (!green || !yellow)
	{
		street_state=2;
	}

}
