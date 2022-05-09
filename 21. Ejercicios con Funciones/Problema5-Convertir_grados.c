/*
	Problema Nª5:
	
	Hacer un programa que pida por pantalla una temperatura en grados Celsius, 
	muestre en menú para convertirlos a Fahrenheit o Kelvin y muestre el equivalente
	por pantalla, utilizar funciones.
	
	Celsius a Fahrenheit:
		
		F = (9*C)/5 + 32 
	
	Celsius a Kelvin:
	
		K = C + 273.15
*/

#include<stdio.h>
float fahrenheit(float C);
float kelvin(float C);

int main(){
	
	int opc;
	float C, F=0, K=0;
	
	printf("Digite el valor de los grados Celsius: ");
	scanf("%f", &C);
	
	do{
		printf("\n1. Convertir a grados Fahrenheit");
		printf("\n2. Convertir a grados Kelvin");
		printf("\n3. Salir");
		printf("\nOpcion: ");
		scanf("%i", &opc);
		
		switch(opc){
			case 1: 
				F = fahrenheit(C);
				printf("El equivalente en grados Fahremheit es: %f", F);
			break;
			
			case 2: K = kelvin(C);
				printf("El equivalente en grados Kelvin es: %f", K);
			break;
		}
		
	}while(opc != 3);
	
	F = fahrenheit(C);
	
	return 0;
}

float fahrenheit(float C){
	float F=0;
	F = (9*C)/5 + 32;
	return F;
}

float kelvin(float C){
	float K=0;
	K = C + 273.15;
	return K;
}
