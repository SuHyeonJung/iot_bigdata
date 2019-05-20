#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int number_1 = 0;
	int	number_2;
	int number_3 = 1;

	while (number_1 < 5) {
		printf("총 5개의 정수를 입력하세요: ");
		scanf("%d", &number_2);

		while (number_2 <= 0)
		{
			printf(" 0보다 큰 수를 입력하세요: ");
			scanf("%d", &number_2);
		}
		number_1++;
	}

}