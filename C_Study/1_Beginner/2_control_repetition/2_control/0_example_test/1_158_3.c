#include <stdio.h>

void main(){
	int num;
	int num1=1;
	int result=3;
	int result1;

	printf("숫자를 입력하세요: ");
	scanf("%d", &num);
	for(num=1;num1<=num;num1++){
		result1 = result * num1;	
		printf("%d ", result);
		}
				
}

