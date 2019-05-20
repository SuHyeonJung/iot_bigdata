#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int number;
	int count = 0;


	printf("양의 정수를 입력하세요: ");
	scanf("%d", &number);

	while (number > count) {

		printf("Hello world!\n");
		count++;
	}
}
