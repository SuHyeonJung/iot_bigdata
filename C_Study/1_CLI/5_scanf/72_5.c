#include <stdio.h>

void main(){
	int num1, num2, num3;
	int result;

	printf("ù��° ���� �Է��ϼ���: ");
	scanf("%d", &num1);

	printf("�ι�° ���� �Է��ϼ���: ");
	scanf("%d", &num2);
	
	printf("����° ���� �Է��ϼ���: ");
	scanf("%d", &num3);

	result = (num1-num2)*(num2+num3)*(num3%num1);
	printf("%d", result);
}
