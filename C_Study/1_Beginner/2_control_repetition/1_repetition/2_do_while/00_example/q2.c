#include <stdio.h>

void main(){
	int unit_no=0;
	int line_no=0;
//	char character_star=42
//	char character_circle=79;

	while(line_no<5){
		unit_no=0;
		while(unit_no != line_no){
			printf("O");
		//	printf("%c", character_circle);
			unit_no++;
		}
		printf("*\n");
	//	printf("*\n", character_star);

		line_no++;
	}
}

