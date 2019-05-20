#include <stdio.h>
double CelToFah(int celsius);
double FahToCel(int fahrenheit);

void main(){
	int temperature;
	int option;
	double result;
	
	printf("온도를 입력하세요. ex) 1. 섭씨 2. 화씨: ");
	scanf("%d", &temperature);
	
	printf("온도를 입력하세요.: ");
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

