#include <stdio.h>

void main(){
    double f_number1;
    double f_number2;
	double result1;
	double result2;
	double result3;
	double result4;

    printf("�� ���� �Ǽ��� �Է��ϼ���: ");
    scanf(" %lf %lf", &f_number1, &f_number2);

	result1 = (f_number1+f_number2);
	result2 = (f_number1-f_number2);
	result3 = (f_number1*f_number2);
	result4 = (f_number1/f_number2);
    printf("���ϱ�: %f\n",result1);
    printf("����: %f\n",result2);
    printf("���ϱ�: %f\n",result3);
    printf("������: %f",result4);

}

