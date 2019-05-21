#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char word[100];
	int i = 0;

	printf("영단어를 입력하세요: ");
	scanf("%s", word);
	while (word[i] != '\0') {
		i++;
	}
	printf("%d", i);

}
