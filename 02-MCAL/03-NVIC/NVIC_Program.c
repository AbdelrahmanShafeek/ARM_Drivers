/***************************************************************/
/*Author  :: Abd El-Rahman Ahmed Shafeek                       */
/*Version :: V01                                               */
/*Date    :: 10/8/2023                                         */
/***************************************************************/

#include "STD_types.h"
#include "BIT_math.h"

#include "NVIC_config.h"
#include "NVIC_interface.h"
#include "NVIC_private.h"


void MNVIC_VoidEnableInterrupt(u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber <=31)
	{
		NVIC_ISER0 = (1<<Copy_u8IntNumber);
		//SET_BIT(NVIC_ISER0,Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber <=59)
	{
		NVIC_ISER1 = (1<<(Copy_u8IntNumber-32));
		//SET_BIT(NVIC_ISER1,(Copy_u8IntNumber-32));
	}
	else
	{
		/*Return Error*/
	}
}



void MNVIC_VoidDisableInterrupt(u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber <=31)
	{
		NVIC_ICER0 = (1<<Copy_u8IntNumber);
		//SET_BIT(NVIC_ICER0,Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber <=59)
	{
		NVIC_ICER1 = (1<<(Copy_u8IntNumber-32));
		//SET_BIT(NVIC_ICER1,(Copy_u8IntNumber-32));
	}
	else
	{
		/*Return Error*/
	}
}



void MNVIC_VoidSetPendingRegister(u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber <=31)
	{
		NVIC_ISPR0 = (1<<Copy_u8IntNumber);
		//SET_BIT(NVIC_ISPR0,Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber <=59)
	{
		NVIC_ISPR1 = (1<<(Copy_u8IntNumber-32));
		//SET_BIT(NVIC_ISPR1,(Copy_u8IntNumber-32));
	}
	else
	{
		/*Return Error*/
	}
}


void MNVIC_VoidClearPendingRegister(u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber <=31)
	{
		NVIC_ICPR0 = (1<<Copy_u8IntNumber);
		//SET_BIT(NVIC_ICPR0,Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber <=59)
	{
		NVIC_ICPR1 = (1<<(Copy_u8IntNumber-32));
		//SET_BIT(NVIC_ICPR1,(Copy_u8IntNumber-32));
	}
	else
	{
		/*Return Error*/
	}
}


u8 MNVIC_u8GetActiveFlag(u8 Copy_u8IntNumber)
{
	u8 status=0;
	if(Copy_u8IntNumber <=31)
	{
		status = (NVIC_IABR0>>Copy_u8IntNumber) & 1;
		//return GET_BIT(NVIC_IABR0,Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber <=59)
	{
		status = (NVIC_IABR0>>(Copy_u8IntNumber-32)) & 1;
		//return GET_BIT(NVIC_IABR1,(Copy_u8IntNumber-32));
	}
	else
	{
		/*Return Error*/
	}
	return status ;
}

void MNVIC_VoidSetPriority(s8 copy_s8IntID , u8 copy_u8GroupPriority , u8 copy_u8SubPriority , u32 copy_u32NumGroup)
{
	u8 Local_u8Priority = copy_u8SubPriority | (copy_u8GroupPriority <<(copy_u32NumGroup - 0x05FA0300)/256) ;
	
	/*Core Peripheral*/
	
	/*External Peripheral*/
	if(copy_s8IntID >=0)
	{
		NVIC_IPR[copy_s8IntID]=Local_u8Priority << 4 ;
	}
	SCB_AIRCR = copy_u32NumGroup ;
}







