#include <stdio.h>

void main(){
	int num;
	int num1;
	int result=0;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d" , &num);
	num1=9;
	while(num1>0){
		result = num * num1;
		printf("%d * %d = %d\n",num,num1,result);
		num1--;	
	}
}

