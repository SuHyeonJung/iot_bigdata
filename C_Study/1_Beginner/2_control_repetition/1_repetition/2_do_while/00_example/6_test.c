#include <stdio.h>

void main(){
	int multiplier=1;
	int times=2;

	printf("구구단을 외자!\n\n");
	
	do{
		do{
			printf("%d*%d=%d\n", times, multiplier, times * multiplier);
		    multiplier++;	
		}	while(multiplier<10);
				printf("%d*%d=%d\n", times, multiplier, times * multiplier);
		    	times++;	
	}while(times < 10);

		
}
