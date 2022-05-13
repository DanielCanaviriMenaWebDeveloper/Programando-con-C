/*
	Funciones Trigonometricas :
	
	acos(x)     -> Calcula el arco coseno de x.
	asin(x)     -> Calcula el arco seno de x.
	atan(x)     -> Calcula el arco tangente de x.
	cos(x)      -> Calcula el coseno del angulo x, en radianes.
	sin(x)      -> Calcula el seno del angulo x, en radianes.
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
	
	printf("Digite un numero: "); // Introducir valores entre -1 y 1
	scanf("%f", &x);
	
	cambio = acos(x);
	
	printf("%.2f", cambio);
}
