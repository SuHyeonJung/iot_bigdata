#include <stdio.h>
/*
  d: ��ȣ�� �ִ� 10���� ���� ( char, short, int �迭)
  u: ��ȣ�� ���� 10���� ���� ( unsigned �迭)
 ld: long
lld: long long
  f: float, double
 lf: long double 
*/

void main(){
		int int_max=2147483647;
		int int_max_test=2147483648;
		signed int sint_max=2147483647;
		unsigned int uint_max=4294967295;
	    unsigned uint_max2=4294967295;
		char char_max=127;		
	    signed char sint_c_max=127;	
	    unsigned char usint_c_max=255;
	    short short_max=32767;	
	    unsigned short u_short_max=65535;	
	    long long_max=2147483647;	
	    unsigned long u_long_max=4294967295;	
	    long long l_long_max=9223372036854775807;	
	    unsigned long long u_l_long_max=18446744073709551615;	

		printf("int �ִ밪: %d\n", int_max);
		// visual studio 2019 �����Ϸ����� int�� 4byte�� ó���ϱ� ������
		// int Ÿ�����δ� 2,147,483,647 �̻��� ���� ǥ���� �� ����.
		printf("int_max + 1: %d\n", int_max_test);
		printf("signed int �ִ밪: %d\n", sint_max);
		printf("unsigned int �ִ밪: %u\n", uint_max);
		printf("unsigned �ִ밪: %u\n", uint_max2);
		printf("char �ִ밪: %d\n", char_max);
		printf("sint_c �ִ밪: %d\n", sint_c_max);
		printf("usint_c �ִ밪: %u\n",usint_c_max);
		printf("short �ִ밪: %d\n",short_max);
		printf("u_short �ִ밪: %u\n",u_short_max);
		printf("long �ִ밪: %d\n",long_max);
		printf("u_long �ִ밪: %u\n",u_long_max);
		printf("l_long �ִ밪: %lld\n",l_long_max);
		printf("u_l_long �ִ밪: %llu\n",u_l_long_max);

}
