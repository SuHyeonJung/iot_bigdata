#include <stdio.h>

void main(){
	int num=1;
	int result=0;
	
	while(num!=0){
		printf("������ �Է��ϼ���: ");
		scanf("%d", &num);
		result = result + num;		
	}
	printf("%d", result);
}

