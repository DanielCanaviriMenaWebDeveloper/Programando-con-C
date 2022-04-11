/*
	Problema 2: Comprobar si un número digitado por el usuario 
	es positivo o negativo.
*/

#include<stdio.h>

int main(){
	
	float numero;
	printf("Digite un numero: ");
	scanf("%f", &numero);
	
	if (numero >= 0)
		puts("El numero es positivo");
	
	if (numero < 0)
		puts("El numero es negativo");
	
	return 0;
}
