/*
	Expresion condicional : El operador '?'
	
	Sintaxis:
		
		Condicion ? Expresion1 : Expresion2	
*/

#include<stdio.h>

int main(){
	
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	(numero%2 == 0) ? printf("El numero es par") : printf("El numero es impar");
	
	// (numero%2 == 0) ? funcion1() : funcion2(); // Ejemplo de uso con funciones
	
	return 0;
}
