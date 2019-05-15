#include <stdio.h>

void main(){
	int num=1;
	int result=0;
	
	while(num!=0){
		printf("정수를 입력하세요: ");
		scanf("%d", &num);
		result = result + num;		
	}
	printf("%d", result);
}

