#include <stdio.h>

void main(){
	int num1, num2;
	int result1;
	int result2;

	printf("ù��° ���� �Է��ϼ���: ");
	scanf("%d", &num1);

	printf("�ι�° ���� �Է��ϼ���: ");
    scanf("%d", &num2);

	result1 = num1/num2;
	result2 = num1%num2;
	printf("%d/%d=%d\n", num1, num2, result1);
	printf("%d%%%d=%d", num1, num2, result2); 

}
