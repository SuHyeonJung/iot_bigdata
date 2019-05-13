#include <stdio.h>

void main(){
    double f_number1;
    double f_number2;
	double result1;
	double result2;
	double result3;
	double result4;

    printf("두 개의 실수를 입력하세요: ");
    scanf(" %lf %lf", &f_number1, &f_number2);

	result1 = (f_number1+f_number2);
	result2 = (f_number1-f_number2);
	result3 = (f_number1*f_number2);
	result4 = (f_number1/f_number2);
    printf("더하기: %f\n",result1);
    printf("빼기: %f\n",result2);
    printf("곱하기: %f\n",result3);
    printf("나누기: %f",result4);

}

