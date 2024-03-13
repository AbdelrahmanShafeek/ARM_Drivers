/***************************************************************/
/*Author  :: Abd El-Rahman Ahmed Shafeek                       */
/*Version :: V01                                               */
/*Date    :: 2/9/2023                                         */
/***************************************************************/

#ifndef AFIO_PRIVATE_H_
#define AFIO_PRIVATE_H_

/*Registers Difinitions*/

#define AFIO_Base_Address		0x40010000

typedef struct
{
	volatile u32 EVCR ;			/*offset: 0x00 // Event control register*/
	volatile u32 MAPR ;			/*offset: 0x04 // AF remap and debug I/O configuration register*/
	volatile u32 EXTICR[4];
	/*
	volatile u32 EXTICR1 ;		//offset: 0x08 // External interrupt configuration register 1
	volatile u32 EXTICR2 ;		//offset: 0x0c // External interrupt configuration register 2
	volatile u32 EXTICR3 ;		//offset: 0x10 // External interrupt configuration register 3
	volatile u32 EXTICR4 ;		//offset: 0x14 // External interrupt configuration register 4
	*/
	volatile u32 MAPR2 ;		/*offset: 0x1c // AF remap and debug I/O configuration register2*/
}AFIO_t;

#define AFIO ((volatile AFIO_t *)AFIO_Base_Address)

#endif



