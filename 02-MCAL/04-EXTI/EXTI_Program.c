/***************************************************************/
/*Author  :: Abdelrahman Ahmed Shafik                          */
/*Version :: V01                                               */
/*Date    :: 1/9/2023                                          */
/***************************************************************/

#include "STD_types.h"
#include "BIT_math.h"

#include "EXTI_config.h"
#include "EXTI_interface.h"
#include "EXTI_private.h"


void MEXTI_voidInit()
{
	#if		EXTI_Mode==Rising
	SET_BIT(EXTI -> RTSR , EXTI_LINE);
	#elif	EXTI_Mode==Falling
	SET_BIT(EXTI -> FTSR , EXTI_LINE);
	#elif	EXTI_Mode==ON_Change
	SET_BIT(EXTI -> RTSR , EXTI_LINE);
	SET_BIT(EXTI -> FTSR , EXTI_LINE);
	#else
		#error "Wrong Mode and Line Choice"
}

void MEXTI_voidEnableEXTI(u8 copy_u8Line)
{
	SET_BIT(EXTI -> IMR , copy_u8Line);
}

void MEXTI_voidDisableEXTI(u8 copy_u8Line)
{
	CLEAR_BIT(EXTI -> IMR , copy_u8Line);
}

void MEXTI_voidSWTrigger(u8 copy_u8Line)
{
	SET_BIT(EXTI -> SWIER  , copy_u8Line);
}

void MEXTI_voidSetSignalLatch(u8 copy_u8Line , u8 copy_u8mode)
{
	switch(copy_u8mode)
	{
		case Rising :
			SET_BIT(EXTI -> RTSR , EXTI_LINE);
		break ;
		case Falling :
			SET_BIT(EXTI -> FTSR , EXTI_LINE);
		break ;
		case ON_Change :
			SET_BIT(EXTI -> RTSR , EXTI_LINE);
			SET_BIT(EXTI -> FTSR , EXTI_LINE);
		break ;
	}
}





