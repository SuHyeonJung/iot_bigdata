#include <stdio.h>

void main(){
	int num;
	int num1;
	int num2=0;
	float result=0;
	float result1=0;

	printf("�Է� �� ������ ����: ");
	scanf("%d" , &num);
	while(num2<num){
		printf("���� �Է�");
		scanf("%d", &num1);
		result = result + (float)num1;
		num2++;	
	}
		result1 = result/(float)num;
	printf("�Է��� ���: %f", result1);
}

