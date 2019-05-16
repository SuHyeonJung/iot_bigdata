#include <stdio.h>

void main(){
	int num1;
	int num2;

	printf("두 개의 정수를 입력하세요. ex)4 5:\n");
	scanf("%d %d", &num1, &num2);

	printf("%d-%d=%d\n", num1, num2, num1+num2);
	printf("%d*%d=%d\n", num1, num2, num1*num2);
	
}
