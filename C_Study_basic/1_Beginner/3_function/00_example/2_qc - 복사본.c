#include <stdio.h>
double CelToFah(int celsius);
double FahToCel(int fahrenheit);

void main(){
	int temperature;
	int celsius;
	int fahrenheit;
	double result_cel;
	double result_fah;
	
	printf("온도를 입력하세요. ex) 1. 섭씨 2. 화씨: ");
	scanf("%d", &temperature);
	
	if(temperature == 1){
		printf("섭씨 온도를 입력하세요.: ");
		scanf("%d", &celsius); 
		result_cel = CelToFah(celsius);
		printf("%lf \n", result_cel);
	}else{
		printf("화씨 온도를 입력하세요.: ");
		scanf("%d", &fahrenheit); 
		result_fah = FahToCel(fahrenheit);
		printf("%lf \n", result_fah);
	}
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

