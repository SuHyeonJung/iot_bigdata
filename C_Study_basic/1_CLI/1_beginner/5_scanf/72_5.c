#include <stdio.h>

void main(){
	int num1, num2, num3;
	int result;

	printf("첫번째 수를 입력하세요: ");
	scanf("%d", &num1);

	printf("두번째 수를 입력하세요: ");
	scanf("%d", &num2);
	
	printf("세번째 수를 입력하세요: ");
	scanf("%d", &num3);

	result = (num1-num2)*(num2+num3)*(num3%num1);
	printf("%d", result);
}
