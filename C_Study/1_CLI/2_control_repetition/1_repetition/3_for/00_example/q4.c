#include <stdio.h>

void main(){
	int num=0;
	int total=0;

	do{
		total = total + num;
		num = num + 2;
	}while(num <= 100);
	
	printf("0 �̻� 100������ ���� �� ¦���� ���� %d �Դϴ�.", total);
}

