/***************************************************************/
/*Author  :: Abd El-Rahman Ahmed Shafeek                       */
/*Version :: V01                                               */
/*Date    :: 4/7/2023                                          */
/***************************************************************/

#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_

/*	Options ::
	1-RCC_HSE_Crystal
	2-RCC_HSE_RC
	3-RCC_HSI
	4-RCC_PLL				*/

#define RCC_Clock_Type 		RCC_HSE_Crystal


/*	Options ::
	1-RCC_PLL_IN_HSI_DIV_2
	2-RCC_PLL_IN_HSE_DIV_2
	3-RCC_PLL_IN_HSE		*/
/*NOTE :: Choose the multiplication factor only if the pll is the input for clock*/

#if RCC_Clock_Type==RCC_PLL
	#define RCC_PLL_Input	RCC_PLL_IN_HSI_DIV_2
#endif



/*	Options :: 2~16		*/
/*NOTE :: Choose the multiplication factor only if the pll is the input for clock && an caution , the clock cannot exceed 72MHZ*/
#if RCC_Clock_Type==RCC_PLL
	#define RCC_PLL_MUL	4
#endif

#endif