//Entradas y salidas
#include<stdio.h>
int main(){

/*  Ejemplo de salida de muchos datos agrupados
	
	int a = 10;
	float b = 15.5;
	char c = 'e';

	printf("%i %.2f %c", a, b, c); // Salida de muchos datos agrupados

*/	

	// Ejemplo donde se pide 3 tipos de datos por teclado: (char | int | float)
	
	char c;
	int a;
	float b;
	
	
	printf("Digite el valor de la variable c: ");
	scanf("%c", &c);
	printf("\n");
	
	printf("Digite el valor de la variable a: ");
	scanf("%i", &a);
	printf("\n");
	
	printf("Digite el valor de la variable b: ");
	scanf("%f", &b);
	printf("\n");
	
	printf("El valor de la variable a es: %i", a);
	printf("\n");
	
	printf("El valor de la variable b es: %1f", b);
	printf("\n");
	
	printf("El valor de la variable c es: %c", c);
	
	// Nota: Por algun motivo no me permite pedir ingresar el valor 
	// de la variable c luego de pedir un entero o flotante
	
	return 0;
	
}
