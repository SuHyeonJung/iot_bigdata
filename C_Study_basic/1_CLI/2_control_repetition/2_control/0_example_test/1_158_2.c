#include <stdio.h>

void main(){
	int num;
	int num1=1;
	int result=3;
	int result1=0;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);
	while(num>0){

		result1 = result * num1;
		printf("%d ", result1);
		num--;
		num1++;
	}
}

