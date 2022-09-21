/*
 * button.h
 *
 * Created: 9/13/2022 2:28:54 AM
 *  Author: darsh
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../lib/types.h"
#include "../../MCAL/dio/dio_interface.h"
void button_init(uint8_t buttonport,uint8_t buttonpin);
void button_get_state(uint8_t buttonport,uint8_t buttonpin,uint8_t * val);





#endif /* BUTTON_H_ */