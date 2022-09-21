/*
 * bit_math.h
 *
 * Created: 9/12/2022 7:48:35 PM
 *  Author: darsh
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define  SETBIT(var,pin)    (var |= (1<<pin))
#define  CLEARBIT(var,pin)    (var &= ~ (1<<pin))
#define  TOGGLEBIT(var,pin)  (var ^= (1<<pin))
#define  GETBIT(var,pin)  ((var & (1<<pin))>>pin)




#endif /* BIT_MATH_H_ */