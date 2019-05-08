#include <stdio.h>

void main(){
    char a_code;
    	
    printf("문자를 입력하세요: ");
    scanf(" %c", &a_code);

	printf("문자 %c의 아스키코드값은 %d입니다.", a_code, a_code);

}

