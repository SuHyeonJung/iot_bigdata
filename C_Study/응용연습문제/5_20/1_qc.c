#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int arr[5];
	int i;
	int max = 0;
	int min = 0;
	int sum = 0;

	for (i = 0; i < 5; i++) {

		printf("%d���� ������ �Է��ϼ���: ", i + 1);
		scanf("%d", &arr[i]);
		max = arr[0];
		min = arr[0];
	}
		for (i = 1; i < 5; i++){
			if (max < arr[i]) {
				max = arr[i];


		}
			else if (min > arr[i]) {
				min = arr[i];
		}
		sum = sum + arr[i];
	}
	printf("�Էµ� ���� �߿��� �ִ밪:%d\n ", max);
	printf("�Էµ� ���� �߿��� �ּҰ�:%d\n ", min);
	printf("�Էµ� ������ ����:%d ", sum);
}
