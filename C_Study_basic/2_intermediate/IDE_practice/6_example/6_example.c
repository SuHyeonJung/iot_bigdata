#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int number_1 = 0;
	int	number_2;
	int number_3 = 1;

	while (number_1 < 5) {
		printf("�� 5���� ������ �Է��ϼ���: ");
		scanf("%d", &number_2);

		while (number_2 <= 0)
		{
			printf(" 0���� ū ���� �Է��ϼ���: ");
			scanf("%d", &number_2);
		}
		number_1++;
	}

}