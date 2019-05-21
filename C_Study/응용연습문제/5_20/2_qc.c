#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	char text[] ="Good time";
	int i=0;
	while(text[i] != 0){ 
		printf("%c", text[i]);
		i++;
	}
}

