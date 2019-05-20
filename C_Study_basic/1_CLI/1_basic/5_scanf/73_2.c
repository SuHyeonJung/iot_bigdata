#include <stdio.h>

void main(){
	int num1, num2;
	int result;

	printf("첫번째 수를 입력하세요: ");
	scanf("%d", &num1);
    
	printf("두번째 수를 입력하세요: ");
	scanf("%d", &num2);

	result = num1-num2;
	printf("\n%d-%d=%d\n", num1, num2, result);

	result = num1*num2;
	printf("%d*%d=%d\n", num1, num2, result);
	



}
