#include <stdio.h>

void main(){

	int Large_n;
	int integer;
	int total_sum = 0;
	int index_of_sum = 1;

	printf("�� ���� ������ �Է��Ͻðڽ��ϱ�? :");
	scanf("%d",&Large_n);
	printf("\n");

	while(index_of_sum <= Large_n)
	{
		printf("���տ� �� ������ �Է��Ͽ� �ֽʽÿ�: ");
		scanf("%d",	&integer);

		total_sum = total_sum + integer;
		index_of_sum = index_of_sum + 1;	
	}

	printf("\n�Է��Ͻ� ������ ����� %5.2f �Դϴ�.",(float)total_sum/Large_n);
}
