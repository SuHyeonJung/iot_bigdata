#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int number;
	int count = 1;
	int value;
	int result = 0;

	printf("양의 정수를 하나 입력하세요: ");
	scanf("%d", &number);

	value = 3;
	while (count <= number) {
		result = value * count;
			printf("%d\n", result);
		count++;
	}
}
