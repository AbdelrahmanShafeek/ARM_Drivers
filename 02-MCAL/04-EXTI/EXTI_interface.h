/***************************************************************/
/*Author  :: Abdelrahman Ahmed Shafik                          */
/*Version :: V01                                               */
/*Date    :: 1/9/2023                                          */
/***************************************************************/

#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_

#define EXTI_LINE 	Line0					/*0 ~ 15*/
#define EXTI_Mode	Rising					/*Rising , Falling , ON_Change*/

void MEXTI_voidInit();
void MEXTI_voidEnableEXTI(u8 copy_u8Line);
void MEXTI_voidDisableEXTI(u8 copy_u8Line);
void MEXTI_voidSWTrigger(u8 copy_u8Line);


#endif




