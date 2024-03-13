/***************************************************************/
/*Author  :: Abdelrahman Ahmed Shafik                          */
/*Version :: V01                                               */
/*Date    :: 10/8/2023                                         */
/***************************************************************/

#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_


#define	16Group,0Sub	0x05FA0300							//4 bits for groups & 0 bits for sub groups
#define	8Group,2Sub		0x05FA0400							//3 bits for groups & 1 bits for sub groups
#define	4Group,4Sub		0x05FA0500							//2 bits for groups & 2 bits for sub groups
#define	2Group,8Sub		0x05FA0600							//1 bits for groups & 3 bits for sub groups
#define 0Group,16Sub	0x05FA0700							//0 bits for groups & 4 bits for sub groups


void MNVIC_VoidEnableInterrupt(u8 Copy_u8IntNumber);
void MNVIC_VoidDisableInterrupt(u8 Copy_u8IntNumber);
void MNVIC_VoidSetPendingRegister(u8 Copy_u8IntNumber);
void MNVIC_VoidClearPendingRegister(u8 Copy_u8IntNumber);
u8 MNVIC_u8GetActiveFlag(u8 Copy_u8IntNumber);



#endif




