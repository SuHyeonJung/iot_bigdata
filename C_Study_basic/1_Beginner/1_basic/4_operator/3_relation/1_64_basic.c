#include <stdio.h>
/*
 ���迬�� ����ǥ
 A < B => A�� B���� ������?
 A > B => A�� B���� ū��?
 A == B => A�� B�� ������?
 A != B => A�� B�� ���� ������?(�ٸ���?) !�� Not�� �ǹ�
 A <= B => A�� B���� �۰ų� ������?(OR���꿡 ���� ���߿� �ϳ��� �¾Ƶ� ��)
 A >= B => A�� B���� ũ�ų� ������?(OR���꿡 ���� ���߿� �ϳ��� �¾Ƶ� ��)
 ���̸� 1�� ��ȯ,�����̸� 0�� ��ȯ 
 */
void main(){
	int num1=10;
	int num2=12;
    int result;

	result = (num1 < num2);
	printf("(num1 < num2) => �򰡰��: %d\n", result);
	
	result = (num1 > num2);
	printf("(num1 > num2) => �򰡰��: %d\n", result);
	
	result = (num1 == num2);
	printf("(num1 == num2) => �򰡰��: %d\n", result);
	
	result = (num1 != num2);
	printf("(num1 != num2) => �򰡰��: %d\n", result);
	
	result = (num1 <= num2);
	printf("(num1 <= num2) => �򰡰��: %d\n", result);
	
	result = (num1 >= num2);
	printf("(num1 >= num2) => �򰡰��: %d", result);
}
