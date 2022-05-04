/*
	Repetición: El bucle do-while (Hacer mientras)
	
	Sintaxis:
	
		do{
		
			Intrucciones...
			
		}while(condicion)
*/

#include<stdio.h>

int main(){
	
	int i;
	
	i = 1;
	
	do {
		printf("%i.\n", i);
		i++;
	}while(i<=10); // Mientras se cumpla la condición la iteración se repite
	
	return 0;
}
