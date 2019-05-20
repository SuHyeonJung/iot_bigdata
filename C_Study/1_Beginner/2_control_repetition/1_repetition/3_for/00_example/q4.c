#include <stdio.h>

void main(){
	int num=0;
	int total=0;

	do{
		total = total + num;
		num = num + 2;
	}while(num <= 100);
	
	printf("0 이상 100이하의 정수 중 짝수의 합은 %d 입니다.", total);
}

