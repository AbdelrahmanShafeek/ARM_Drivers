/***************************************************************/
/*Author  :: Abdelrahman Ahmed Shafik                          */
/*Version :: V01                                               */
/*Date    :: 16/7/2023                                         */
/***************************************************************/

#include "STD_types.h"
#include "BIT_math.h"

#include "GPIO_config.h"
#include "GPIO_interface.h"
#include "GPIO_private.h"


void GPIO_VoidSetPinDirection(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Mode)
{
	switch(Copy_u8Port)
	{
		case 0:						//GPIOA
			if(7>=Copy_u8Pin)		//GPIOA_CRL
			{
				GPIOA_CRL &= ~((0b1111)<<(Copy_u8Pin*4));
				GPIOA_CRL |=(Copy_u8Mode<<(Copy_u8Pin*4));
			}
			else					//GPIOA_CRH
			{
				Copy_u8Pin-=8;
				GPIOA_CRH &= ~((0b1111)<<(Copy_u8Pin*4));
				GPIOA_CRH |=(Copy_u8Mode<<(Copy_u8Pin*4));
			}
		break ;
		case 1:						//GPIOB
			if(7>=Copy_u8Pin)		//GPIOB_CRL
			{
				GPIOB_CRL &= ~((0b1111)<<(Copy_u8Pin*4));
				GPIOB_CRL |=(Copy_u8Mode<<(Copy_u8Pin*4));
			}
			else					//GPIOB_CRH
			{
				Copy_u8Pin-=8;
				GPIOB_CRH &= ~((0b1111)<<(Copy_u8Pin*4));
				GPIOB_CRH |=(Copy_u8Mode<<(Copy_u8Pin*4));
			}
		break ;
		case 2:						//GPIOC
			if(7>=Copy_u8Pin)		//GPIOC_CRL
			{
				GPIOC_CRL &= ~((0b1111)<<(Copy_u8Pin*4));
				GPIOC_CRL |=(Copy_u8Mode<<(Copy_u8Pin*4));
			}
			else					//GPIOC_CRH
			{
				Copy_u8Pin-=8;
				GPIOC_CRH &= ~((0b1111)<<(Copy_u8Pin*4));
				GPIOC_CRH |=(Copy_u8Mode<<(Copy_u8Pin*4));
			}
		break ;
	}
}

void GPIO_VoidSetPinValue(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value)
{
	switch(Copy_u8Port)
	{
		case 0:						//GPIOA
			if(Copy_u8Value==0)		//LOW (0)
			{
				CLEAR_BIT(GPIOA_ODR,Copy_u8Pin);
			}
			else					//HIGH (5V)
			{
				SET_BIT(GPIOA_ODR,Copy_u8Pin);
			}
		break ;
		case 1:						//GPIOB
			if(Copy_u8Value==0)		//LOW (0)
			{
				CLEAR_BIT(GPIOB_ODR,Copy_u8Pin);
			}
			else					//HIGH (5V)
			{
				SET_BIT(GPIOB_ODR,Copy_u8Pin);
			}
		break ;
		case 2:						//GPIOC
			if(Copy_u8Value==0)		//LOW (0)
			{
				CLEAR_BIT(GPIOB_ODR,Copy_u8Pin);
			}
			else					//HIGH (5V)
			{
				SET_BIT(GPIOB_ODR,Copy_u8Pin);
			}
		break ;
	}
}

u8 GPIO_u8GetPinValue(u8 Copy_u8Port , u8 Copy_u8Pin)
{
	u8 PIN_Value=0 ;
	switch(Copy_u8Port)
	{
		case 0:						//GPIOA
			PIN_Value=GET_BIT(GPIOA_IDR,Copy_u8Pin);
		break ;
		case 1:						//GPIOB
			PIN_Value=GET_BIT(GPIOB_IDR,Copy_u8Pin);
		break ;
		case 2:						//GPIOC
			PIN_Value=GET_BIT(GPIOB_IDR,Copy_u8Pin);
		break ;
	}
	return PIN_Value ;
}







