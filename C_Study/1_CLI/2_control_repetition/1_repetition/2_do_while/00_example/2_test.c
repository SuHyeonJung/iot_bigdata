#include <stdio.h>

void main(){
	int number=0;
	int number1=0;
	int result= 0;

	number = 5;
		while(number > 0){
			printf(" ������ �Է��ϼ���: " );
			scanf("%d", &number1);
			number--;
 			//result = result + number1;
			while(number1 < 1){
				printf("1�̻��� ���� �Է��ϼ���: ");
				scanf("%d", &number1);
			}
				
 			result = result + number1;
	}
	printf("�ټ� ���� ���� ���� %d�Դϴ�",result);

}
