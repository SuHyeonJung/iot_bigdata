#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int number_1;
	int number_2;
	int number_3 = 0;
	int result = 0;
	float value = 0;

	printf("몇개의 정수를 입력하실래요: ");
	scanf("%d", &number_1);
	while (number_3 < number_1) {

		printf("정수를 입력하세요: ");
		scanf("%d", &number_2);
		result = result + number_2;
		number_3++;
	}
	value = result / number_1;
	printf("%f", value);
}
