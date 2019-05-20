#include <stdio.h>

void main(){
	printf("  /* */ <== ANSI 99 style 주석\n");
	printf("  //    <== ANSI 89 style 주석\n");
	printf(" printf(\"문자열\"); <== 기분문법\n\n");

	printf("Format string\n");
	printf("print(\"%%[Format string]\", 값);\n");
	printf("현재 온도: %d도, 오존지수: %f, 정확도: %d%%\n\n", 22,0.075,99);

	printf("순위\t\t       영화명\t\t    변동폭\n");
	printf("  1\t\t  어벤저스엔드게임\t      -0\n");
	printf("  2\t\t      캡틴마을\t              -0\n");
	printf("  3\t\t        생일\t              +1\n");
        printf("  4\t\t       미성년\t              -1\n");	


}
