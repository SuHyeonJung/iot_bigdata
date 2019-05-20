#include <stdio.h>
#pragma warning (disable:4996)

void Add(int val);
int num; // Global Variable(전역변수)는 기본 0으로 초기화 됨

void main() {
	printf("num: %d\n", num);
	Add(3);
	printf("num: %d\n", num);
	num++; // 전역변수 num의 값 1 증가
	printf("num: %d\n", num);
}

void Add(int val) {
	num += val;
}