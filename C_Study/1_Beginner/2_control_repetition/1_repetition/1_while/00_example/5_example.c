#include <stdio.h>

void main(){
	int num=0;
	int num1=1;
	int result;
	double finish;

	printf("몇개의 정수를 사용하시겠습니까: ");
	scanf("%d", &num);


	while( num > 0 ){
			printf("정수를 입력하세요");
			scanf("%d", &num1);
			result = (num1+num1+num1);
			num--;
	}
	
	finish = result/num;
	printf(" %f",finish);
   
}
