/*
	La sentencia while
	
	Sintaxis:
	
		while(condicion){
			instrucciones;
		}
*/
// Mostrar los 10 primeros numeros en pantalla en forma ascendente.
// Mostrar los 10 primeros numeros en pantalla en forma descendente.
// Mostrar 5 asteriscos '*'
#include<stdio.h>

int main(){
	
	int i, j, k;
	
	i = 1;
	j = 10;
	k = 1;
	
	printf("\t=== Ascendente ===\n");
	while(i <= 10){
		printf("\t%i\n", i);
		i++; // i = i + 1;
	}
	
	printf("\n\t=== Descendente ===\n");
	while(j >= 1){
		printf("\t%i\n", j);
		j--;
	}
	
	printf("\n\t=== Mostrando asteriscos ===\n");
	while(k <= 5){
		printf("\t*\n");
		k++;
	}
	
	return 0;
}
