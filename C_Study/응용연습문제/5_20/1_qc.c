#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int arr[5];
	int index=0;
	int sum = 0;
	int i;
	int compare;

	for(i=0;i<5;i++){

		printf("%d���� ������ �Է��ϼ���: ", i+1);
		scanf("%d", &arr[i]);
		sum = sum + arr[index];
		if(arr[0] < arr[1] && arr[1] < arr[2] && arr[2] < arr[3] && arr[3] < arr[4] && arr[5] < arr[1]){
			printf("�Էµ� ���� �߿��� �ִ밪:%d ", arr[i]);
		}if(arr[0] > arr[1] && arr[1] > arr[2] && arr[2] > arr[3] && arr[3] > arr[4] && arr[5] > arr[1]){
			printf("�Էµ� ���� �߿��� �ּҰ�:%d ", arr[i]);
		}
		
	}
	printf("�Էµ� ������ ����:%d ", sum);


}

