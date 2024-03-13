/***************************************************************/
/*Author  :: Abd El-Rahman Ahmed Shafeek                       */
/*Version :: V01                                               */
/*Date    :: 10/8/2023                                         */
/***************************************************************/

#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_

/*Registers Difinitions*/

#define NVIC_Base_Address	0xE000E100									//0xE000E010
#define SCB_Base_Address 	0xE000ED00


#define NVIC_ISER0		*((u32*)(NVIC_Base_Address+0X000))				//Interrupt Set-Enable Register
#define NVIC_ISER1		*((u32*)(NVIC_Base_Address+0X004))
#define NVIC_ISER2		*((u32*)(NVIC_Base_Address+0X008))

#define NVIC_ICER0		*((u32*)(NVIC_Base_Address+0X080))				//Interrupt Clear-Enable Register
#define NVIC_ICER1		*((u32*)(NVIC_Base_Address+0X084))
#define NVIC_ICER2		*((u32*)(NVIC_Base_Address+0X088))

#define NVIC_ISPR0		*((u32*)(NVIC_Base_Address+0X100))				//Interrupt Set-Pending Register (Debugging)
#define NVIC_ISPR1		*((u32*)(NVIC_Base_Address+0X104))
#define NVIC_ISPR2		*((u32*)(NVIC_Base_Address+0X108))

#define NVIC_ICPR0		*((u32*)(NVIC_Base_Address+0X180))				//Interrupt Clear-Pending Register (Debugging)
#define NVIC_ICPR1		*((u32*)(NVIC_Base_Address+0X184))
#define NVIC_ICPR2		*((u32*)(NVIC_Base_Address+0X188))

#define NVIC_IABR0		*((volatile u32*)(NVIC_Base_Address+0X200))		//Interrupt Active Bit Register

#define NVIC_IPR		((volatile u8 *)(NVIC_Base_Address+0X300))
#define SCB_AIRCR		((volatile u32 *)(SCB_Base_Address+0x0c))

#endif



