#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int number_1;
	int number_2 = 9;
	int result;

	printf("정수를 입력하세요: ");
	scanf("%d", &number_1);

	while (number_2 > 0) {
		result = number_1 * number_2;
		printf(" %d * %d = %d\n", number_1, number_2, result);
		number_2--;


	}
}