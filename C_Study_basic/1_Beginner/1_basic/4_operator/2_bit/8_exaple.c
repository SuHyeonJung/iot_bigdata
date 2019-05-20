#include <stdio.h>

void main(){
	int number1 = 4;
	int shift_left1 = number1 << 2;
    int shift_left2 = number1 << 1;
    int result = (number1*shift_left1)/shift_left2;

    printf("%d\n", result);	

}
