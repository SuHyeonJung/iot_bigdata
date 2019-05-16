#include <stdio.h>

void main(){
	int num=0;
	// 누적을 위한 변수를 선언
	int result;
	
	printf("정수를 입력하세요: \n");
	scanf("%d", &num);
	// 누적을 하는 코드
    result = num;
	printf("정수를 입력하세요: \n");
	scanf("%d", &num);
	// 누적을 하는 코드
	result = result + num;
	printf("정수를 입력하세요: \n");
	scanf("%d", &num);
	// 누적을 하는 코드
	result = result + num;
	printf("%d", result);

}
