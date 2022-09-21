/*
 * LED.h
 *
 * Created: 9/13/2022 1:14:36 AM
 *  Author: darsh
 */ 

#include "../../lib/types.h"
#ifndef LED_H_
#define LED_H_
void LED_init (uint8_t LEDport, uint8_t LEDpin);
void LED_on (uint8_t LEDport, uint8_t LEDpin);
void LED_off (uint8_t LEDport, uint8_t LEDpin);
void LED_toggle (uint8_t LEDport, uint8_t LEDpin);



#endif /* LED_H_ */