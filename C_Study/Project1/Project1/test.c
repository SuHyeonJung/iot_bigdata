#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char word[100];
	int i = 0;

	printf("���ܾ �Է��ϼ���: ");
	scanf("%s", word);
	while (word[i] != '\0') {
		i++;
	}
	printf("%d", i);

}
