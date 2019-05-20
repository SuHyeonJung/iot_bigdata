#include <stdio.h>

void main(){
	int num1;
	int num2;
	int result;

	printf("두 개의 정수를 입력하세요.ex)4 5:");
	scanf("%d %d", &num1,&num2);

	result = num1%num2;
	printf("%d%%%d=%d", num1, num2, result);

}

