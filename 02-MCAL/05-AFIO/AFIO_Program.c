/***************************************************************/
/*Author  :: Abdelrahman Ahmed Shafik                          */
/*Version :: V01                                               */
/*Date    :: 2/9/2023                                          */
/***************************************************************/

#include "STD_types.h"
#include "BIT_math.h"

#include "AFIO_config.h"
#include "AFIO_interface.h"
#include "AFIO_private.h"

//LECTURE 9
void MAFIO_voidSetEXTIConfiguration(u8 copy_u8Line , u8 copy_u8Port)
{
	AFIO -> EXTICR[(copy_u8Line/4)] &=  (~((u32 *)0b1111) <<((copy_u8Line%4)*4));
	AFIO -> EXTICR[(copy_u8Line/4)] |= (copy_u8Port <<((copy_u8Line%4)*4));
}








