#include <stdio.h>

void main(){
	int num=0;
	int num1=0;
	int result=0;

	while(num1<5){
		printf("0���� ū ���� �Է�: ");
		scanf("%d", &num);
		num1++;

		while(num<=0){
			printf("0���� ū ���� �Է�: ");
			scanf("%d", &num);
		}
		result = result + num;
	}
		printf("%d\n", result);
}
