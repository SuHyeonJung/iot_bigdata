#include <stdio.h>
int AbsoCompare_1(int num1, int num2,int num3);
int AbsoCompare_2(int num1, int num2,int num3);


void main(){
	int num1, num2, num3;

	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("���� ū ����: %d\n", AbsoCompare_1(num1, num2, num3));
	printf("���� ���� ����: %d\n", AbsoCompare_2(num1, num2, num3));
}

int AbsoCompare_1(int num1, int num2, int num3){

	if (num1 > num2 && num2 > num3){
		return num1;
	}else if (num2 > num3 && num3 > num1){
		return num2;
	}else{
		return num3;
	}
}
int AbsoCompare_2(int num1, int num2, int num3){

	if (num1 > num2 && num2 > num3){
		return num3;
	}else if (num3 > num1 && num1 > num2){
		return num2;
	}else{
		return num1;

	}
}

