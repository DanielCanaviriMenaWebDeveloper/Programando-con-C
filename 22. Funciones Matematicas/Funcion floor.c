/*
	Funcion: 
	
	floor(x)   -> Redondea por defecto al entero anterior mas proximo.
*/

#include<stdio.h>
void funcion_matematica();

int main(){
	
	funcion_matematica();
	
	return 0;
}

void funcion_matematica(){
	
	float x, cambio=0;
	
	printf("Digite un numero: ");
	scanf("%f", &x);
	
	cambio = floor(x); // 5.7 -> 5 || 5.1 -> 5 || 5.9 - > 5 || Redondea al anterior entero mas cercano.
	
	printf("%.2f", cambio);
}
