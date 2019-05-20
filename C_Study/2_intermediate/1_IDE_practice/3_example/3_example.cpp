#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int number = 0;
	int sum = 0;
	
	while(number != -1){
		printf("양의 정수를 입력하세요: ");
		scanf("%d", &number);
		sum = (sum + number);
		number--;
	}
		printf("%d\n", sum);
}
