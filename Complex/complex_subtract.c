#include "complex.h"
complex_t sub_complex(complex_t complex_num1, complex_t complex_num2)
{
    complex_t complex_num3;
    complex_num3.real=complex_num1.real-complex_num2.real;
    complex_num3.imaginary=complex_num1.imaginary-complex_num2.imaginary;
    return complex_num3;
}