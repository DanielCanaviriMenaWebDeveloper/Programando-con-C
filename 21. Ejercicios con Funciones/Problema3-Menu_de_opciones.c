/*
	Problema Nº3 :
	
	Hacer un programa que muestre un menú con las opciones sumar, restar, 
	multiplicar y dividir, el programa solicitará una opción y realizara 
	la tarea elegida, se debe usar procedimientos.
*/

#include<stdio.h>
void menu();
void sumar();
void restar();
void multiplicar();
void dividir();

int main(){
	
	menu();
	
	
	return 0;
}

void menu(){
	
	int opcion;
	
	do{
		printf("\n\n\t**** Menu ****");
		printf("\n1. Sumar");
		printf("\n2. Restar");
		printf("\n3. Multiplicar");
		printf("\n4. Dividir");
		printf("\n5. Salir");
		printf("\nDigite una opcion: ");
		scanf("%i", &opcion);
	
		switch(opcion){
			case 1: 
				sumar();
				break;
		
			case 2: 
				restar();
				break;
	
			case 3: 
				multiplicar();
				break;
	
			case 4: 
				dividir();
				break;
		}
	}while(opcion!=5);
	
}

void sumar(int a, int b){
	int n1, n2, suma=0;
	printf("Digite 2 numeros: ");
	scanf("%i %i", &n1, &n2);
	suma = n1 + n2;
	printf("\nLa suma es: %i", suma);
}

void restar(int a, int b){
	int n1, n2, resta=0;
	printf("Digite 2 numeros: ");
	scanf("%i %i", &n1, &n2);
	resta = n1 - n2;
	printf("\nLa resta es: %i", resta);
}

void multiplicar(int a, int b){
	int n1, n2, mult=0;
	printf("Digite 2 numeros: ");
	scanf("%i %i", &n1, &n2);
	mult = n1 * n2;
	printf("\nLa multiplicacion es: %i", mult);
}

void dividir(int a, int b){
	int n1, n2, div=0;
	printf("Digite 2 numeros: ");
	scanf("%i %i", &n1, &n2);
	div = n1 / n2;
	printf("\nLa division es: %i", div);
}
