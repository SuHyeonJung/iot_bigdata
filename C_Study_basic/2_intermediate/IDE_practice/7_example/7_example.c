#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int i = 0;
	int j = 0;

	while (i < 5)
	{

		while (i > j)
		{
			printf("o");
			j++;
		}
		j = 0;
		printf("*\n");
		i++;
	}
}