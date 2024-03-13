/***************************************************************
**Author  :: Abd El-Rahman Ahmed Shafeek                       *
**Version :: V01                                               *
**Date    :: 4/7/2023                                          *
****************************************************************/

#include "STD_types.h"
#include "BIT_math.h"

#include "RCC_config.h"
#include "RCC_interface.h"
#include "RCC_private.h"

void RCC_VoidEnableClock(u8 Copy_u8Bus , u8 Copy_u8Per)  /*Send the bus number and the peripheral number on that bus to perform on*/
{
	if(31>=Copy_u8Per)
	{
		switch (Copy_u8Bus)
		{
			case RCC_AHB  :
			SET_BIT(RCC_AHBENR,Copy_u8Per);
			break;
			case RCC_APB1 :
			SET_BIT(RCC_APB1ENR,Copy_u8Per);
			break;
			case RCC_APB2 :
			SET_BIT(RCC_APB2ENR,Copy_u8Per);
			break;
			default :
			/* Return Error */
			Break ;
		}
	}
	else
	{
		/*Return Error*/
	}		
}

void RCC_VoidDisableClock(u8 Copy_u8Bus , u8 Copy_u8Per)  /*Send the bus number and the peripheral number on that bus to perform on*/
{
	if(31>=Copy_u8Per)
	{
		switch (Copy_u8Bus)
		{
			case RCC_AHB  :
			CLEAR_BIT(RCC_AHBENR,Copy_u8Per);
			break;
			case RCC_APB1 :
			CLEAR_BIT(RCC_APB1ENR,Copy_u8Per);
			break;
			case RCC_APB2 :
			CLEAR_BIT(RCC_APB2ENR,Copy_u8Per);
			break;
			default :
			/* Return Error */
			Break ;
		}
	}
	else
	{
		/*Return Error*/
	}
}



void RCC_VoidInitSysClock(void)
{
	#if             RCC_Clock_Type==RCC_HSE_Crystal
		RCC_CR|=0x00010000;
		RCC_CFGR|=0X00000001;
		/*CLEAR_BIT(RCC_CR,18);
		SET_BIT(RCC_CR,16);*/
	#elif			RCC_Clock_Type==RCC_HSE_RC
		RCC_CR|=0x00050000;
		RCC_CFGR|=0X00000001;
		/*SET_BIT(RCC_CR,18);
		SET_BIT(RCC_CR,16);*/        
	#elif			RCC_Clock_Type==RCC_HSI
		RCC_CR|=0x00000081;
		//SET_BIT(RCC_CR,0);
	#elif			RCC_Clock_Type==RCC_PLL
		#if 	RCC_PLL_Input==RCC_PLL_IN_HSI_DIV_2
			CLEAR_BIT(RCC_CFGR,16);
		#elif 	RCC_PLL_Input==RCC_PLL_IN_HSE_DIV_2
			RCC_CFGR|=0x00030000;
		#elif	RCC_PLL_Input==RCC_PLL_IN_HSE
			RCC_CFGR|=0x00010000;
		#endif
		RCC_CFGR|=(RCC_PLL_MUL<<18);   //Set bits for multiplication
		SET_BIT(RCC_CR,24);
		/*switch(RCC_PLL_Input)
		{
			case RCC_PLL_IN_HSI_DIV_2:
			CLEAR_BIT(RCC_CFGR,16);
			break ;
			case RCC_PLL_IN_HSE_DIV_2:
			SET_BIT(RCC_CFGR,17);
			SET_BIT(RCC_CFGR,16);
			break ;
			case RCC_PLL_IN_HSE:
			CLEAR_BIT(RCC_CFGR,17);
			SET_BIT(RCC_CFGR,16);
			break ;
			default :
			//Return Error
			break ;
		}
		SET_BIT(RCC_CR,24);*/
	#else
		/*Return Error*/
	#endif
}
/*My try هتوسع*/
void RCC_VoidInitSysClock(u8 Copy_u8ClockSource ,u32 Copy_u32SysClock)
{
	switch(Copy_u8ClockSource)
	{
		case 0:											//HSI
		if(Copy_u32SysClock)
		{
			CLEAR_BIT(RCC_CFGR,16);
		}
		break ;
		case 1:											//HSE
		if(Copy_u32SysClock==)
		{
			CLEAR_BIT(RCC_CFGR,17);
		}
		break ;
		
		default :
		/*Return Error*/
		break ;
	}
	
	
	/*
	MSO ::
	RCC_CFGR|=0x04000000;									//HSI
	RCC_CFGR|=0x06000000;									//HSE
	RCC_CFGR|=0x07000000;									//PLL
	*/
}




