#include <stdio.h>

void main(){
	int world=7;
	int number=1;

    printf("World sector: %d\n",world);	
	// while 함수 사용 시 한줄 출력일 경우 중괄호(brace) 생략 가능
	while(number<=50){
		printf("Hello guest%d!\n", number++);
	}
	// 만약 두줄 이상 입력 시 중괄호를 생략 한다면 프로그램이 오동작 될 수 있다.
	// 그러므로 중괄호 생략은 하지 않는 것이 좋다.
	while(number<=50)
		printf("Hello guest%d!\n", number);
		number++;
	
}
