#include <stdio.h>

void main(){
	int num=0;
	int num1=9;
	int result;

	printf("숫자를 입력하세요:");
	scanf("%d", &num);

	while(num1 > 0){
			result = num * num1;
			printf("%d\n", result);
			num1--;
	}

}
