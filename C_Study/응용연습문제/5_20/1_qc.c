#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int arr[5];
	int index=0;
	int sum = 0;
	int i;
	int compare;

	for(i=0;i<5;i++){

		printf("%d개의 정수를 입력하세요: ", i+1);
		scanf("%d", &arr[i]);
		sum = sum + arr[index];
		if(arr[0] < arr[1] && arr[1] < arr[2] && arr[2] < arr[3] && arr[3] < arr[4] && arr[5] < arr[1]){
			printf("입력된 정수 중에서 최대값:%d ", arr[i]);
		}if(arr[0] > arr[1] && arr[1] > arr[2] && arr[2] > arr[3] && arr[3] > arr[4] && arr[5] > arr[1]){
			printf("입력된 정수 중에서 최소값:%d ", arr[i]);
		}
		
	}
	printf("입력된 정수의 총합:%d ", sum);


}

