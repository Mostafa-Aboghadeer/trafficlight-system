/*
 * IncFile1.h
 *
 * Created: 9/13/2022 10:43:32 PM
 *  Author: darsh
 */ 


#ifndef APP_H_
#define APP_H_
#include "../lib/types.h"
#include "../lib/bit_math.h"
#include "../HAL/Button/button.h"
#include "../HAL/LED/LED.h"
#include "../MCAL/timer/timer_interface.h"
#include "../MCAL/timer/timer_private.h"
#include "../MCAL/interupt/interrupt_interface.h"
#include "../MCAL/interupt/interrupt_private.h"
#define buttonport 'D'
#define  buttonpin 2
typedef enum
{ car_GREEN,car_YELLOW,car_RED}car_LED;
typedef enum
{ pedestrian_GREEN,pedestrian_YELLOW,pedestrian_RED}pedestrian_LED;
void app_start();




#endif /* INCFILE1_H_ */