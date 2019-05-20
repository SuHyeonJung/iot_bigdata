#include <stdio.h>

void main(){
	int a =2;
	if(a ==2){
	printf("%d ", a);
	a = 3;
	printf("%d ", a);
	a = 5;
	printf("%d ", a);
	while(a < 30 ){
		
		while(a % 2 !=0 && a % 3 != 0 && a % 5 != 0){
			printf("%d ", a);
			a++;
			}
		
		
		a++;	
		}
	}
}
