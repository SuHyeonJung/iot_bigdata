#include <stdio.h>

void main(){
	int num1;
	int num2;
	int num3;
	int result;

	printf("�� ���� ������ �Է��ϼ��� ex)1 2 3:\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = (num1*num2)+num3;
	printf("%d*%d+%d=%d",num1,num2,num3,result);

}
