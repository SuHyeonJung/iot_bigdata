#include <stdio.h>
// shift right : 비트를 오른쪽으로 n번 만큼 이동
void main(){
	int num = 15;           // 00000000 00000000 00000000 00001111
    int result1 = num >> 1; // 00000000 00000000 00000000 00000111
	int result2 = num >> 2; // 00000000 00000000 00000000 00000011
    int result3 = num >> 3; // 00000000 00000000 00000000 00000001
	// intel cpu에서 visual studio 컴파일러로 bit shift right 연산을
	// 한 결과 최하위비트가 최상위 비트로 round robin되지는 않았다.
	// bit shift right 연산을 하면서 최하위 비트는 사라진다.
	// 상황에 따라 >> 1의 결과가 아래와 같이 나올 수도 있다.
	// 00000000 00000000 00000000 00000111
	// 01000000 00000000 00000000 00000111



	printf("1칸 이동 결과: %d\n", result1);
	printf("2칸 이동 결과: %d\n", result2);
	printf("3칸 이동 결과: %d\n", result3);


}
