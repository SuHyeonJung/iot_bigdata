#include <stdio.h>
void print_fibonacci(int input_number);

void main(){
	int input_number;
	int result;
	
	printf("정수를 입력하세요. ");
	scanf("%d", &input_number);
	//printf(" %d", result); 
	print_fibonacci(input_number);
}

void print_fibonacci(int input_number){
	int number_1;
	int number_2;
	int number_3;
	int number_4;
	int result;
	
	for(number_1=0 ; number_1 < input_number ; number_1++){
		number_3=1;
		//number_4=1;
		for(number_2=0 ; number_2 < number_3 ; number_2++){
			printf("%d ", number_2);
			
		//printf("%d ", number_3);
		}	
	}
}
