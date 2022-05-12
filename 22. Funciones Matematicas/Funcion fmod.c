/*
	Funcion: 
	
	fmod(x,y)  -> Calcula el resto de la division de x/y.
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
	
	cambio = fmod(x, y); // Equivale a hallar el modulo.
	
	printf("%i", cambio);
}
