#include <stdio.h>

void main(){
	
	int input_num1, input_num2, input_num3, result;
		
	printf("�� ���� ������ �Է��ϼ���(����1 ����2 ����3): ");
  	scanf("%d %d %d",&input_num1, &input_num2, &input_num3);

	result = (input_num1-input_num2)*(input_num2+input_num3)*(input_num3%input_num1);
	printf("\n");
	printf("(����1-����2)x(����2+����3)x(����3%%����1)\n\n");
	printf("result = %d\n", result);
}
