/*
	El bucle for:
	
	Sintaxis:
	
		for(inicializacion; condicion; incremento){
			
			Intrucciones;
			...
			
		}
*/

// Ejemplo : Mostrar los 10 primeros numeros en forma ascendente

#include<stdio.h>

int main(){
	
	int i;
	
	for(i=1; i<=10; i++){
		printf("%i.\n", i);
	}
	
	printf("\n=====================\n");
	
	for(i=10; i>=1; i--){
		printf("%i.\n", i);
	}
	
	return 0;
}
