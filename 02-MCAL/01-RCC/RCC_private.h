/***************************************************************/
/*Author  :: Abd El-Rahman Ahmed Shafeek                       */
/*Version :: V01                                               */
/*Date    :: 4/7/2023                                          */
/***************************************************************/

#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

/*Registers Difinitions*/

/*  The base address :: 0x4002 1000 *
	THe RCC Offset   :: 0x00	   	*/

#define RCC_CR         *((u32*)0x40021000)         /*Control Input clock on the processor (HSI | HSE | PLL)*/ 
#define RCC_CFGR       *((u32*)0x40021004)         /*Control Input clock on the processor (HSI | HSE | PLL)*/
#define RCC_CIR        *((u32*)0x40021008)
#define RCC_APB2RSTR   *((u32*)0x4002100c)
#define RCC_APB1RSTR   *((u32*)0x40021010)
#define RCC_AHBENR     *((u32*)0x40021014)         /*Enable | Disable Clock on different Peripherals*/
#define RCC_APB2ENR    *((u32*)0x40021018)         /*Enable | Disable Clock on different Peripherals*/
#define RCC_APB1ENR    *((u32*)0x4002101c)         /*Enable | Disable Clock on different Peripherals*/
#define RCC_BDCR       *((u32*)0x40021020)
#define RCC_CSR        *((u32*)0x40021024)


#define	RCC_HSE_Crystal		0
#define	RCC_HSE_RC			1
#define	RCC_HSI				2
#define	RCC_PLL				3

#endif



