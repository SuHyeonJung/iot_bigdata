#include <stdio.h>

void main(){
	int num1, num2;
	int result;

	printf("ù��° ���� �Է��ϼ���: ");
	scanf("%d", &num1);
    
	printf("�ι�° ���� �Է��ϼ���: ");
	scanf("%d", &num2);

	result = num1-num2;
	printf("\n%d-%d=%d\n", num1, num2, result);

	result = num1*num2;
	printf("%d*%d=%d\n", num1, num2, result);
	



}
