/*
	Problema 1: Comprobar a traves de un programa si un alumno aprueba o no
	un examen (Aprueba si su nota es mayor a 10.5)
*/

#include<stdio.h>

int main(){
	
	float nota;
	printf("Digite la nota del examen: ");
	scanf("%f", &nota);
	
	
	// Otra forma de imprimir por consola : 
	// puts()  --> Solo imprime dento un condicional
	if (nota > 10.5)
		// printf("El alumno esta aprobado");
		puts("El alumno esta aprobado");
	
	
	return 0;
}
