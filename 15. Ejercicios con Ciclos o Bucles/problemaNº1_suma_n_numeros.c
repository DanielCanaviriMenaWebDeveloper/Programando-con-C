/*
	Problema Nº 1:
	
		Suma de los n primeros números.
*/

#include<stdio.h>

int main(){
	
	int cont, n, suma = 0;
	
	printf("Digite el total de numeros a sumar: ");
	scanf("%i", &n);
	
	cont = 1;
	
	while(cont <= n){
		suma += cont; // suma = suma + cont
		cont++;
	}
	
	printf("\n La suma es: %i", suma);
	
	return 0;
}
