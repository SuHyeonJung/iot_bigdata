#include <stdio.h>
#pragma warning (disable:4996)

int my_addition(int number1, int number2) {
	return number1 + number2;
}

int my_subtraction(int number1, int number2) {
	return number1 - number2;
}

int my_meltiplication(int number1, int number2) {
	return number1 * number2;
}

int my_division(int number1, int number2) {
	int count;
	for (count = 0; count < 1000; count++) {
		printf("step %d\n", count);
	}
	return number1 / number2;
}

void main() {
	char my_calculation_option;
	int calculation_result = 0;
	int number1, number2;
	
	printf("===== ��Ģ���� ���� ver2 =====\n");
	printf("���ϴ� ������ �����ϼ���:(ex: +,-,*,/) : ");
	
	scanf("%c", &my_calculation_option);

	printf("�� ���� �Է��ϼ���(ex 3 4): ");
	scanf("%d %d", &number1, &number2);
	
	switch (my_calculation_option) {
		case '+':
			calculation_result = my_addition(number1, number2);
			break;
		case '-':	
			calculation_result = my_subtraction(number1, number2);
			break;
		case '*':	
			calculation_result = my_meltiplication(number1, number2);
			break;
		case '/':	
			calculation_result = my_division(number1, number2);
			break;
	}
	printf("%d %c %d = %d", number1, my_calculation_option, number2, calculation_result);
}