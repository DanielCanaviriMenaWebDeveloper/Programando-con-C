/*
	Problema N� 3: 
	
	Hacer 2 arrays de cadena de caracteres, pedir el nombre al usuario 
	guardarlo dentro de un array y luego, copiar el contenido de ese
	array a otro.
*/

#include<stdio.h>
#include<conio.h>
#define TAM 20

int main(){
	
	char nombre1[TAM], nombre2[TAM];
	
	printf("Digite su nombre: ");
	gets(nombre1);  // nombre1 = daniel
	
	// nombre2 = nombre1;
	
	strcpy(nombre2, nombre1);
	
	printf("Su nombre es: %s", nombre2);
	
	return 0;
}
