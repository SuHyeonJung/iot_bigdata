#include <stdio.h>

// �Լ� ����(Function Proto Type)
void my_add(void);

void main(){ 
	my_add();//�Լ� ȣ��(Function)

}
void my_add(void){ // �Լ� ���Ǻ� 
	int result;
	int number1;
	int number2;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d", &number1, &number2);

	printf("\n- ������ ���� ���� ver1\n");
	printf("ù ��° �Է�: %d\n", number1);
	printf("�� ��° �Է�: %d\n", number2);

	result = number1 + number2;
	printf("%d+%d = %d\n", number1, number2, result);

}