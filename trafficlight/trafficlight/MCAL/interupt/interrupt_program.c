/*
 * CFile1.c
 *
 * Created: 9/13/2022 8:00:30 PM
 *  Author: darsh
 */ 
#include "../../lib/bit_math.h"
#include "../../lib/types.h"
#include "interrupt_interface.h"
#include "interrupt_private.h"
void INT0_enb()
{
	SETBIT (GICR,6);
}
void INT1_enb ()
{
	SETBIT (GICR,7);
}
void INT2_enb()
{
	SETBIT (GICR,5);
}
void rising_edg()
{
	MCUCR |= (1<<0) | (1<<1);
}