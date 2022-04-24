/*
	Problema Nº 16: 
	
	Hacer un menu que considere las siguientes opciones:
	
	caso 1: Cubo de un numero
	caso 2: Numero par o impar
	caso 3: Salir
	
*/

#include<stdio.h>
//#include<stdlib.h>

int main(){
	
	int opcion, numero, cubo;
	
	
	printf("\tMenu de opciones: ");
	printf("\n1. Cubo de un numero");
	printf("\n2. Numero par o impar");
	printf("\n3. Salir");
	printf("\nOpcion: ");
	scanf("%i", &opcion);
	
	switch(opcion){
		case 1: printf("Digite un numero: ");
				//fflush(stdin);
				scanf("%i", &numero);
				cubo = numero * numero * numero;
				printf("El cubo del numero es : %.2i", cubo);
		break;
		case 2: printf("Digite un numero: ");
				scanf("%i", &numero);
				if(numero % 2 == 0){
					printf("El numero es par");
				}
				else {
					printf("El numero es impar");
				}
		break;
		case 3: break;
		default: printf("Opcion incorrecta");
	}
	
	return 0;
}
