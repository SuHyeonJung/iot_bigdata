#include <stdio.h>
double CelToFah(int celsius);
double FahToCel(int fahrenheit);

void main(){
	int temperature;
	int option;
	double result;
	
	printf("�µ��� �Է��ϼ���. ex) 1. ���� 2. ȭ��: ");
	scanf("%d", &temperature);
	
	printf("�µ��� �Է��ϼ���.: ");
	scanf("%d", &temperature); 
	if(option == 1){
		result = CelToFah(temperature);
	}else{
		result = FahToCel(temperature);
	}
	printf("%lf \n", result);
}

double CelToFah(int celsius){
	double fah;
	fah = (1.8*celsius)+32;
		return fah;
}

double FahToCel(int fahrenheit){
	double cel;
	cel = (fahrenheit-32)/1.8;
	return cel;
}

