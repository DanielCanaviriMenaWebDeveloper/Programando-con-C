//Directivas del Preprocesador y variables

//Librerias
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

//Macro
#define PI 3.1416

int y = 5; //Variable Global

int main(){

	int x = 10; //Variable Local
	
	float suma = 0;
	
	suma = PI + x;
	
	// .2f => Para indicar que solo imprima el resultado con 2 decimales y redondee. 
	printf("La suma es: %.3f", suma);
	
	return 0;
}
