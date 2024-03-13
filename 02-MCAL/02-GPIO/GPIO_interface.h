/***************************************************************/
/*Author  :: Abd El-Rahman Ahmed Shafeek                       */
/*Version :: V01                                               */
/*Date    :: 16/7/2023                                         */
/***************************************************************/

#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

#define GPIOA	0
#define GPIOB	1
#define GPIOC	2

#define PIN0	0
#define PIN1	1
#define PIN2	2
#define PIN3	3
#define PIN4	4
#define PIN5	5
#define PIN6	6
#define PIN7	7
#define PIN8	8
#define PIN9	9
#define PIN10	10
#define PIN11	11
#define PIN12	12
#define PIN13	13
#define PIN14	14
#define PIN15	15

/*Direction Choose	(Mode Choose)*/

#define OUTPUT_GENPUR_PUSH_PULL_MAXSPEED_10MHZ			0x0001
#define OUTPUT_GENPUR_OPEN_DRAIN_MAXSPEED_10MHZ			0x0101
#define OUTPUT_ALTRFUNC_PUSH_PULL_MAXSPEED_10MHZ		0x1001
#define OUTPUT_ALTRFUNC_OPEN_DRAIN_MAXSPEED_10MHZ		0x1101

#define OUTPUT_GENPUR_PUSH_PULL_MAXSPEED_2MHZ			0x0010
#define OUTPUT_GENPUR_OPEN_DRAIN_MAXSPEED_2MHZ			0x0110
#define OUTPUT_ALTRFUNC_PUSH_PULL_MAXSPEED_2MHZ			0x1010
#define OUTPUT_ALTRFUNC_OPEN_DRAIN_MAXSPEED_2MHZ		0x1110

#define OUTPUT_GENPUR_PUSH_PULL_MAXSPEED_50MHZ			0x0011
#define OUTPUT_GENPUR_OPEN_DRAIN_MAXSPEED_50MHZ			0x0111
#define OUTPUT_ALTRFUNC_PUSH_PULL_MAXSPEED_50MHZ		0x1011
#define OUTPUT_ALTRFUNC_OPEN_DRAIN_MAXSPEED_50MHZ		0x1111


#define INPUT_Analog									0x0000
#define INPUT_Floating									0x0100
#define INPUT_PULL_DOWN									0x1000		//PxODR (Register) 0
#define INPUT_PULL_UP									0x1000		//PxODR (Register) 1
//////////////////////////////////////////////////////////////



void GPIO_VoidSetPinDirection(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Mode);
void GPIO_VoidSetPinValue(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value);
u8 GPIO_u8GetPinValue(u8 Copy_u8Port , u8 Copy_u8Pin);

#endif




