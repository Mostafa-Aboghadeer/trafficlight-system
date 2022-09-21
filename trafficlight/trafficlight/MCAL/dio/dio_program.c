/*
 * CFile1.c
 *
 * Created: 9/12/2022 5:51:57 PM
 *  Author: darsh
 */
#include "../../lib/bit_math.h"
#include "dio_private.h"
#include "dio_interface.h"
static volatile PORT_t * DIO_ptr_regs (uint8_t PORTnum) //to know which port and return ptr to PIN address
{
	switch (PORTnum)
	{
		case PORT_A:return PORTA;break;
		case PORT_B:return PORTB;break;
		case PORT_C:return PORTC;break;
		case PORT_D:return PORTD;break;
	}
}
void DIO_init(uint8_t PORTnum,uint8_t PINnum, uint8_t dir)
{
		volatile PORT_t * PORTX= 0;
		PORTX= DIO_ptr_regs(PORTnum);	
		if (dir == IN)
		{
			
			CLEARBIT(PORTX->DDR,PINnum);
		}
		else if (dir==OUT)
		{
			SETBIT(PORTX->DDR,PINnum);
		}

	
}
void DIO_write(uint8_t PORTnum,uint8_t PINnum, uint8_t val)
{
	
	volatile PORT_t * PORTX= 0;
	PORTX= DIO_ptr_regs(PORTnum);
	if (val == LOW)
	{
		CLEARBIT(PORTX->PORT,PINnum);
	}
	if (val== HIGH)
	{
		SETBIT (PORTX->PORT,PINnum);
	}
}
void DIO_toggle(uint8_t PORTnum,uint8_t PINnum)
{
	volatile PORT_t * PORTX= 0;
	PORTX= DIO_ptr_regs(PORTnum);
	TOGGLEBIT (PORTX->PORT,PINnum);
}
void DIO_read(uint8_t PORTnum,uint8_t PINnum, uint8_t *val)
{
	volatile PORT_t * PORTX= 0;
	PORTX= DIO_ptr_regs(PORTnum);
	*val = GETBIT (PORTX->PIN,PINnum);
	 
}
