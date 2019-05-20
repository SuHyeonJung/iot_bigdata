#include <stdio.h>


void main(){
	printf("*2019년 5월 1일 복습\n"); 
	printf("  /* */ <== ANSI 99 style 주석\n");
	printf("  // <== ANSI 89 style 주석\n");
	printf("   printf(\"문자열\"); <== 기본문법\n");
	printf("  \nFormat string\n");
	printf("print(\"%[Format string]\", 값);\n");
	printf("현재 온도:%d도, 오존지수:%f, 정확도:%d%%\n", 22, 0.075, 99);
        printf(" \n순위\t         영화명\t        변동폭\n");
        printf("  1\t    어벤저스엔드게임\t   -0\n");
	printf("  2\t        캡틴마블\t   -0\n");
	printf("  3\t          생일\t           +1\n");
        printf("  4\t         미성년\t           -1\n");	
}
