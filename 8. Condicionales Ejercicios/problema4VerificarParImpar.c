#include<stdio.h>

/*
	Problema 4: Determinar si un n�mero es par, impar. 
*/

int main(){
	
	int numero;
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	if(numero % 2 == 0){
		printf("El numero es par.");
	}
	
	if(numero % 2 !=0){
		printf("El numero es impar.");
	}
	
	return 0;
}
