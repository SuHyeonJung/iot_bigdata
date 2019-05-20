#include <stdio.h>

void main(){
	int a=0;
	int result=0;

	do{
		result = result + a; 
		a = a+2;
	}while(a <= 100);
		printf("0 이상 100이하의 정수 중 짝수의 합은 %d이다.", result);

		
}
