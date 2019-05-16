#include <stdio.h>
int AbsoCompare_1(int num1, int num2,int num3);
int AbsoCompare_2(int num1, int num2,int num3);


void main(){
	int num1, num2, num3;

	printf("세 개의 정수를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("가장 큰 값은: %d\n", AbsoCompare_1(num1, num2, num3));
	printf("가장 작은 값은: %d\n", AbsoCompare_2(num1, num2, num3));
}

int AbsoCompare_1(int num1, int num2, int num3){

	if (num1 > num2 && num2 > num3){
		return num1;
	}else if (num2 > num3 && num3 > num1){
		return num2;
	}else{
		return num3;
	}
}
int AbsoCompare_2(int num1, int num2, int num3){

	if (num1 > num2 && num2 > num3){
		return num3;
	}else if (num3 > num1 && num1 > num2){
		return num2;
	}else{
		return num1;

	}
}

