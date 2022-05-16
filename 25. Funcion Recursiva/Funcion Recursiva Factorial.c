/*
	Recursividad : 
	
	Una función recursiva es una función que se llama a si misma.
	
	1. Caso Base.
	2. Caso Recursivo.
	
*/

// Factorial

#include<stdio.h>

int main(){
	
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	
	return 0;
}

long factorial(int n){
	if(n<=1){
		return 1;
	}
	else{
		return (n*factorial(n-1));
	}
}
