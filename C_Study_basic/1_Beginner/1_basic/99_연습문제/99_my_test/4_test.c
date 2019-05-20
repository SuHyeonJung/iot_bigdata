#include <stdio.h>

void main(){
	int num1;
	int num2;
	int num3;
	int result;

	printf("세 개의 정수를 입력하세요 ex)1 2 3:\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = (num1*num2)+num3;
	printf("%d*%d+%d=%d",num1,num2,num3,result);

}
