/*
	Problema Nº 6 :
	
	Sumar pares desde n hasta m
*/

#include<stdio.h>

int main(){
	
	int n, m, cont, suma_pares = 0;
	
	printf("\nDigite el valor de n: ");
	scanf("%i", &n);
	printf("\nDigite el valor de m: ");
	scanf("%i", &m);
	
	cont = n;
	
	while(cont <= m){
		if(cont % 2 == 0){
			suma_pares = suma_pares + cont;
		}
		cont = cont + 1;
	}
	
	printf("La suma de pares es: %i", suma_pares);
	return 0;
}
