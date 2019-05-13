#include <stdio.h>

void main(){
	int num_index=0;
	int number=1;
	int result;

	printf("정수를 입력하세요:");
	scanf("%d", &num_index);

		while(number <= num_index){
			result = 3*number;
			printf("%d", result);
			number++;

	}
}
