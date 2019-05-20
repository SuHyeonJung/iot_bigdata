#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int n;
	int m;
	int count_1 = 0;
	int count_2 = 0;

	printf("두개의 정수를 입력하세요: ");
	scanf("%d %d", &n, &m);

		while (count_1 < m)
		{
			
			while (n > count_2) 
			{
				printf("*");
				count_2++;
			}
		count_2 = 0;
		printf("\n");
		count_1++;

		}
		/*	while (n < count_1) 
			{
				printf("\n", n);
				*/
}