/**
 * @file complex.h
 * @author Manikanta Suri
 * @brief Header file for complex addition, subtraction, multiplication and division functions
 * @version 0.1
 * @date 2021-03-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __COMPLEX_H__
#define __COMPLEX_H__

complex_t add_complex(complex_t complex_num1, complex_t complex_num2);
/**
 * @brief Function to find addition of two complex numbers
 * 
 * @param[in] complex_num1 
 * @param[in] complex_num2 
 * @return complex_t result of complex addition operation
 */
complex_t sub_complex(complex_t complex_num1, complex_t complex_num2);
/**
 * @brief Function to find subtraction of two complex numbers
 * 
 * @param[in] complex_num1 
 * @param[in] complex_num2 
 * @return complex_t result of complex subtraction operation
 */
complex_t mult_complex(complex_t complex_num1, complex_t complex_num2);
/**
 * @brief Function to find multiplication of two complex numbers
 * 
 * @param[in] complex_num1 
 * @param[in] complex_num2 
 * @return complex_t result of complex multiplication operation
 */
complex_t div_complex(complex_t complex_num1, complex_t complex_num2);
/**
 * @brief Function to find division of two complex numbers
 * 
 * @param[in] complex_num1 
 * @param[in] complex_num2 
 * @return complex_t result of complex division operation
 */
#endif 
