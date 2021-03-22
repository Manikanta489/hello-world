#include<stdio.h>
#include<stdlib.h>
#include "complex.h"
typedef struct complex_t {
float real;
float imaginary;
} complex_t;

int main()
{
complex_t complex_num1={5.0,8.0};
complex_t complex_num2={7.0,9.0};
complex_t complex_result;
complex_result=div_complex(complex_num1,complex_num2);
if(complex_result.imaginary>=0)
printf("Resultant Complex number : %f + %f\n",complex_result.real,complex_result.imaginary);
else
printf("Resultant Complex number : %f - %f\n",complex_result.real,abs(complex_result.imaginary));
return 0;
}
