#include <stdio.h>

void main(){
	int num=0;
	// ������ ���� ������ ����
	int result;
	
	printf("������ �Է��ϼ���: \n");
	scanf("%d", &num);
	// ������ �ϴ� �ڵ�
    result = num;
	printf("������ �Է��ϼ���: \n");
	scanf("%d", &num);
	// ������ �ϴ� �ڵ�
	result = result + num;
	printf("������ �Է��ϼ���: \n");
	scanf("%d", &num);
	// ������ �ϴ� �ڵ�
	result = result + num;
	printf("%d", result);

}
