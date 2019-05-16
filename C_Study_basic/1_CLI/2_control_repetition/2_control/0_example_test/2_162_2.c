#include <stdio.h>

void main(){
	int num=0;
	int num1=0;

	while(num<5){
		while(num!=num1){
			printf("o");
			num1++;
			num1=0;
		}
		printf("*\n");
		num++;
	}
}
