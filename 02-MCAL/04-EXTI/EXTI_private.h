/***************************************************************/
/*Author  :: Abd El-Rahman Ahmed Shafeek                       */
/*Version :: V01                                               */
/*Date    :: 1/9/2023                                         */
/***************************************************************/

#ifndef EXTI_PRIVATE_H_
#define EXTI_PRIVATE_H_

/*Registers Difinitions*/

#define EXTI_Base_Address		0x40010400


typedef struct
{
	volatile u32 IMR ;
	volatile u32 EMR ;
	volatile u32 RSTR ;
	volatile u32 FTSR ;
	volatile u32 SWIER ;
	volatile u32 PR ;
}EXTI_t;

#define	EXTI	((volatile EXTI_t *) EXTI_Base_Address)


#define Line0		0
#define Line1		1
#define Line2		2
#define Line3		3
#define Line4		4

#define	Rising 	0
#define Falling 	1
#define ON_Change	2
#endif



