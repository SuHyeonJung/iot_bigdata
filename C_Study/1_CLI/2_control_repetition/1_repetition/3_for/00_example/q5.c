#include <stdio.h>

void main(){
	int current_times = 2;
	int multiplier=0;

	printf("�������� ����!\n\n");

	do {
		printf("==== %d�� ====\n", current_times);

		do{multiplier++;
		printf("%d + %d = %d\n", current_times, multiplier, current_times * multiplier);
		}while(multiplier<9);
		current_times++;
		multiplier = 0;
		printf("\n");
	}while(current_times <10);

}

