#include <stdio.h>

void main(){
    int num;
	printf("정수 입력: ");
	scanf("%d", &num);
	num = ~num;

	num = num+1;
	printf("부호를 바꾼 결과: %d\n", num);
}
