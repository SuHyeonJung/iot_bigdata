#include <stdio.h>

void main(){
	int num=0;
	int num1=9;
	int result;

	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &num);

	while(num1 > 0){
			result = num * num1;
			printf("%d\n", result);
			num1--;
	}

}
