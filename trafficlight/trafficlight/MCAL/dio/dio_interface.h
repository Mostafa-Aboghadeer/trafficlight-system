/*
 * dio_interface.h
 *
 * Created: 9/12/2022 5:51:49 PM
 *  Author: darsh
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
#include "../../lib/types.h"
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

typedef enum
{ IN,OUT}direction;
typedef enum 
{LOW,HIGH}value;
		
	  
void DIO_init(uint8_t PORTnum,uint8_t PINnum, uint8_t dir);
void DIO_write(uint8_t PORTnum,uint8_t PINnum, uint8_t val);
void DIO_toggle(uint8_t PORTnum,uint8_t PINnum);
void DIO_read(uint8_t PORTnum,uint8_t PINnum, uint8_t *val);




#endif /* DIO_INTERFACE_H_ */