#include <stdio.h>

void main(){
	int number=0;
	int number1=0;
	int number2=0;
	int number3=0;
	int result;


	while(number < 5){
		result = number1+number1+number1+number1+number1;
		printf("5개의 정수를 입력하세요,단 1이상이어야 합니다: ");
		scanf("%d", &number1);
			/*while(number2 > 10 ){
				printf("1미만의 수가 입력되었습니다.재 입력하세요: ");
				scanf("%d", &number3);
				number2++;
			}*/
			number++;
	}

			printf("%d", result);
}
