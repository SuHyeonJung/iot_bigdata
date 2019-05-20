#include <stdio.h>

void main(){
	int num;
	int num1;
	int num2=0;
	float result=0;
	float result1=0;

	printf("입력 할 정수의 개수: ");
	scanf("%d" , &num);
	while(num2<num){
		printf("정수 입력");
		scanf("%d", &num1);
		result = result + (float)num1;
		num2++;	
	}
		result1 = result/(float)num;
	printf("입력의 평균: %f", result1);
}

