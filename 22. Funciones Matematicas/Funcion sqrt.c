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
	
	int x, cambio=0;
	
	printf("Digite un numero: ");
	scanf("%i", &x);
	
	cambio = sqrt(x);
	
	printf("%i", cambio);
}
