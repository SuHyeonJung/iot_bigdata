#include <stdio.h>

void main(){
	int num=0;
	int num1=1;
	int result;
	double finish;

	printf("��� ������ ����Ͻðڽ��ϱ�: ");
	scanf("%d", &num);


	while( num > 0 ){
			printf("������ �Է��ϼ���");
			scanf("%d", &num1);
			result = (num1+num1+num1);
			num--;
	}
	
	finish = result/num;
	printf(" %f",finish);
   
}
