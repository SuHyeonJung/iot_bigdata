#include <stdio.h>

void main(){
	int num1, num2;
	int result1;
	int result2;

	printf("첫번째 수를 입력하세요: ");
	scanf("%d", &num1);

	printf("두번째 수를 입력하세요: ");
    scanf("%d", &num2);

	result1 = num1/num2;
	result2 = num1%num2;
	printf("%d/%d=%d\n", num1, num2, result1);
	printf("%d%%%d=%d", num1, num2, result2); 

}
