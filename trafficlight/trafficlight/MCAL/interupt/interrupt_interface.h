/*
 * interrupt_interface.h
 *
 * Created: 9/13/2022 8:00:22 PM
 *  Author: darsh
 */ 


#ifndef INTERRUPT_INTERFACE_H_
#define INTERRUPT_INTERFACE_H_
#define ENB_GENERAL_INTERRUPT (SETBIT(SREG,7))
#define EXT_INT_0 __vector_1
#define EXT_INT_1 __vector_2
#define EXT_INT_2 __vector_3

void EXT_INT_0(void) __attribute__((signal,used));
void EXT_INT_1(void) __attribute__((signal,used));
void EXT_INT_2(void) __attribute__((signal,used));




void INT0_enb();
void INT1_enb();
void INT2_enb();
void rising_edg();



#endif /* INTERRUPT_INTERFACE_H_ */