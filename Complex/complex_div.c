#include "complex.h"
complex_t div_complex(complex_t complex_num1, complex_t complex_num2)
{
    
    complex_t complex_num3;
    if((complex_num2.imaginary!=0)&&(complex_num2.imaginary!=0))
    {
    complex_num3.real=((complex_num1.real*complex_num2.real)+(complex_num1.imaginary*complex_num2.imaginary))/(complex_num2.real*complex_num2.real+complex_num2.imaginary*complex_num2.imaginary);
    complex_num3.imaginary=(-(complex_num1.real*complex_num2.imaginary)+(complex_num1.imaginary*complex_num2.real))/(complex_num2.real*complex_num2.real+complex_num2.imaginary*complex_num2.imaginary);
    }
    else
    {
    complex_num3.real=0;
    complex_num3.imaginary=0;
    }
    return complex_num3;
}