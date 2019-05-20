#include <stdio.h>

void main(){
	int number=0;
	int number1=0;
	int result= 0;

	number = 5;
		while(number > 0){
			printf(" 정수를 입력하세요: " );
			scanf("%d", &number1);
			number--;
 			//result = result + number1;
			while(number1 < 1){
				printf("1이상의 수를 입력하세요: ");
				scanf("%d", &number1);
			}
				
 			result = result + number1;
	}
	printf("다섯 개의 수의 합은 %d입니다",result);

}
