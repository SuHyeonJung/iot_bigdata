#include <stdio.h>

void main(){
	int num1;
	int result;

    printf("정수를 입력하세요: ");
	scanf("%d", &num1);

    result = num1*num1;
	printf("%d=%d", num1, result);

}
