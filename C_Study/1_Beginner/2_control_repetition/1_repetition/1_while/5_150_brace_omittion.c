#include <stdio.h>

void main(){
	int world=7;
	int number=1;

    printf("World sector: %d\n",world);	
	// while �Լ� ��� �� ���� ����� ��� �߰�ȣ(brace) ���� ����
	while(number<=50){
		printf("Hello guest%d!\n", number++);
	}
	// ���� ���� �̻� �Է� �� �߰�ȣ�� ���� �Ѵٸ� ���α׷��� ������ �� �� �ִ�.
	// �׷��Ƿ� �߰�ȣ ������ ���� �ʴ� ���� ����.
	while(number<=50)
		printf("Hello guest%d!\n", number);
		number++;
	
}
