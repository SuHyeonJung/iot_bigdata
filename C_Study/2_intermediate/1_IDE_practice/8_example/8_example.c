#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int num = 0;
	int result = 0;

	do
	{
		result = result + (num * 2);
		num++;
	} while (num <= 50 );

	printf("%d", result);
}