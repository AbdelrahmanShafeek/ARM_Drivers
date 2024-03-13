/***************************************************************/
/*Author  :: Abd El-Rahman Ahmed Shafeek                       */
/*Version :: V01                                               */
/*Date    :: 4/7/2023                                          */
/***************************************************************/

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT)          REG |=  (1<<BIT)
#define CLEAR_BIT(REG,BIT)        REG &= ~(1<<BIT)
#define TOGGLE_BIT(REG,BIT)       REG ^=  (1<<BIT)
#define GET_BIT(REG,BIT)          ((REG>>BIT)&1)

#endif