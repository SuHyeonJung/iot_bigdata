#include <stdio.h>

void main(){
	//Visual Studio c �����Ϸ��� ���� �ʱ�ȭ ���� ���� ��쿡
	//�������� �ʱ�ȭ
	//���ڿ��� ������ �� ������ ���ڿ��� ũ�⺸�� 1�� �� Ŀ���Ѵ�. (NILL ����
	//����ϱ� ���Ͽ�)
	char str[6];

	str[0] = 'G';
	str[1] = 'o';
	str[2] = 'o';
	str[3] = 'd';
	str[4] = '!';
//	str[5] = '\0';


	printf("�迭 str�� ũ��: %d\n", sizeof(str));
	//printf("�� ���� ������ ���: %c\n", str[13]);
	//printf("�� ���� ������ ���: %d\n", str[13]);

//	str[12]='?';
	printf("���ڿ� ���: %s\n", str);

}

