#include <stdio.h>

/*���� Multi_Or����ǥ
 * A����	B����	C����	���
 * ����		����	����	����
 * ��		����	����	����
 * ����		��		����	����
 * ����		����	��		����
 * ��		��		����	����
 * ����		��		��		����
 * ��		����	��		����
 * ��		��		��		��
 */
void main(){
	int num1=10;
	int num2=12;
	int num3=14;
    int result;

	printf("num1: %d, num2: %d, num3: %d\n", num1, num2,num3);
	
	// ���� || ����	|| ����
	result = (num1 != 10 || num2 < 12 || num3 > 16);
	printf("(num1 == 10 || num2 == 12 || num3 == 16) => �򰡰��: %d\n", result);
	
	// �� || ���� || ����
	result = (num1 == 10 || num2 != 12 || num3 <16);
	printf("(num1 == 10 || num2 == 12 || num3 == 16) => �򰡰��: %d\n", result);
	
	// ���� || �� %% ����
	result = (num1 > 10 || num2 == 12 || num3 != 16);
	printf("(num1 == 10 || num2 == 12 || num3 == 16) => �򰡰��: %d\n", result);
	
	// ���� || ���� || ��
	result = (num1 != 10 || num2 > 12 || num3 == 14);
	printf("(num1 == 10 || num2 == 12 || num3 == 14) => �򰡰��: %d\n", result);
	
	// �� || �� || ����	
    result = (num1 == 10 || num2 == 12 || num3 > 14);
	printf("(num1 == 10 || num2 == 12 || num3 == 14) => �򰡰��: %d\n", result);

	// ���� || �� || ��	
    result = (num1 != 10 || num2 == 12 || num3 == 14);
	printf("(num1 == 10 || num2 == 12 || num3 == 14) => �򰡰��: %d\n", result);
	
	// �� || ���� || ��	
    result = (num1 == 10 || num2 > 12 || num3 == 14);
	printf("(num1 == 10 || num2 == 12 || num3 == 14) => �򰡰��: %d\n", result);

	// �� || �� || ��	
    result = (num1 == 10 || num2 == 12 || num3 == 14);
	printf("(num1 == 10 || num2 == 12 || num3 == 14) => �򰡰��: %d\n", result);
}
