#include <stdio.h>

void main(){
	int num_limit=0;
	int num_index=1;

	printf("������ �Է��ϼ���:");
	scanf("%d", &num_limit);

	while(num_index <= num_limit){
			printf("Hello world%d!\n", num_index++);
	}
}
