#include <stdio.h>

void main(){
	int num_index=0;
	int result=0;

	printf("������ �Է��ϼ���:");
	scanf("%d", &num_index);

		while(num_index != 0){
			result = num_index+result;
			printf("%d", result);
			scanf("%d", &num_index);
			

	}
}
