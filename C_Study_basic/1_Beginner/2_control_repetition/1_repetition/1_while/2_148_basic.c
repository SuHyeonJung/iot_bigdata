#include <stdio.h>

void main(){
	int world=7;
	int number=1;

	//while(���/����/ǥ����)
	//step1] while()�ȿ� �ִ� ���,���� �Ǵ� ǥ������ ���Ѵ�.
	//step2]���� ����� ��(1)�̸� ������ ����� 0�� �ƴ� ���̸�
	//while������ Statement Block�� �����Ѵ�.
	//����(0)�̸� Statement Block�� ���� ���´�.
	//step3]step2���� �� �ΰ�� step1�� �̵��Ѵ�. 
    printf("World sector: %d\n",world);	
	while(number<=50){
		printf("Hello guest%d!\n", number);
		number++;
	}
}
