#include <stdio.h>

void main(){
	int number_1;
	int number_2;
	int number_3;
	int number_4;
	int result1;
	int result2;
	int result3;


	printf("좌 상단의 x,y 좌표를 입력하세요: ");
    scanf("	%d %d", &number_1, &number_2);  
	
	printf("우 하단의 x,y 좌표를 입력하세요: ");
    scanf("	%d %d", &number_3, &number_4);
    
	result1 = (number_2-number_1);
	result2	= (number_4-number_3);
	result3	= (result1*result2);

    printf(" 두 점이 이루는 직사각형의 넓이는 %d입니다." , result3);
}
