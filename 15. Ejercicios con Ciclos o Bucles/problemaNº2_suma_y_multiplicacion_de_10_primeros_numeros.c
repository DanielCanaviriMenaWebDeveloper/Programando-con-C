/*
	Problema N� 2 :
	
		Digite un n�mero, si el n�mero supera a 10, multiplique los 
		10 primeros n�meros, sino, s�melos.
*/

#include<stdio.h>

int main(){
	
	int numero, cont, suma = 0, multiplicacion = 1;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	cont = 1;
	
	if(numero > 10){
		while(cont <= 10){
			multiplicacion *= cont; // multiplicacion = multiplicacion * cont;
			cont++;
		}
		printf("La multiplicacion de los 10 primeros numeros es: %i", multiplicacion);
	}
	else {
		while(cont <= 10){
			suma += cont;
			cont++;
		}
		printf("La suma de los 10 primeros numeros es: %i", suma);
	}
	
	
	return 0;
}
