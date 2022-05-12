/*
	Funcion: 
	
	fabs(x)    -> Devuelve el valor absoluto de x.
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
	
	cambio = fabs(x); 
	
	printf("%.2f", cambio);
}
