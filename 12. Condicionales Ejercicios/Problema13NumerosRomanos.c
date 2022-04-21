/*
	Problema Nº 13:
	
	Cambiar un número entero con el mismo valor pero en romanos.
*/

#include<stdio.h>

int main(){
	
	int numero;
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	switch(numero){
		case 1: printf("I"); break;
		case 2: printf("II"); break;
		case 3: printf("III"); break;
		case 4: printf("IV"); break;
		case 5: printf("V"); break;
	}
	
	return 0;
}
