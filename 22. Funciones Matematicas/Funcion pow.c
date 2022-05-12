/*
	Funcion: 
	
	pow(x,y)   -> Calcula x elevado a la potencia y.
*/

#include<stdio.h>
void funcion_matematica();

int main(){
	
	funcion_matematica();
	
	return 0;
}

void funcion_matematica(){
	
	int x, y, cambio=0;
	
	printf("Digite 2 numeros: ");
	scanf("%i %i", &x, &y);
	
	cambio = pow(x, y);
	
	printf("%i", cambio);
}
