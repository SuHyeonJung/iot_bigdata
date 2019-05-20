#include <stdio.h>
/*
 관계연산 진리표
 A < B => A가 B보다 작은가?
 A > B => A가 B보다 큰가?
 A == B => A는 B와 같은가?
 A != B => A는 B와 같지 않은가?(다른가?) !는 Not의 의미
 A <= B => A가 B보다 작거나 같은가?(OR연산에 따른 둘중에 하나만 맞아도 참)
 A >= B => A가 B보다 크거나 같은가?(OR연산에 따른 둘중에 하나만 맞아도 참)
 참이면 1을 반환,거짓이면 0을 반환 
 */
void main(){
	int num1=10;
	int num2=12;
    int result;

	result = (num1 < num2);
	printf("(num1 < num2) => 평가결과: %d\n", result);
	
	result = (num1 > num2);
	printf("(num1 > num2) => 평가결과: %d\n", result);
	
	result = (num1 == num2);
	printf("(num1 == num2) => 평가결과: %d\n", result);
	
	result = (num1 != num2);
	printf("(num1 != num2) => 평가결과: %d\n", result);
	
	result = (num1 <= num2);
	printf("(num1 <= num2) => 평가결과: %d\n", result);
	
	result = (num1 >= num2);
	printf("(num1 >= num2) => 평가결과: %d", result);
}
