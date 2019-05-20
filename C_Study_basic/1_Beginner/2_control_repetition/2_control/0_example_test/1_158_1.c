#include <stdio.h>

void main(){
	int num=0;

	printf("숫자를 입력하세요: ");
	scanf("%d", &num);

	while(num>0){
		printf("hello world!\n");
		num--;
	}
}

