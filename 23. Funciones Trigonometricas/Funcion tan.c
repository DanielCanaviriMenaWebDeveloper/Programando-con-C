/*
	Funciones Trigonometricas :
	
	tan(x)      -> Devuelve la tangente del angulo x, en radianes.

*/

#include<stdio.h>
#include<math.h>

void funcion_trigonometrica();

int main(){
	
	funcion_trigonometrica();

	return 0;
}

void funcion_trigonometrica(){
	float x, cambio=0;
	
	printf("Digite un numero: "); 
	scanf("%f", &x);
	
	cambio = tan(x);
	
	printf("%.2f", cambio);
}
