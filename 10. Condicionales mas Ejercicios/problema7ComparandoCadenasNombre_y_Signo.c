/*
	Problema Nº 7
	Ingresar por teclado el nombre y el signo de cualquier persona e imprima, 
	el nombre solo si la persona es signo Aries, caso contrario imprima no es 
	signo Aries.
*/

#include<stdio.h>

int main(){
	
	char nombre[30], signo[20];
	
	printf("Digite su nombre: ");
	gets(nombre);
	printf("Digite su signo: ");
	gets(signo);
	
	if(strcmp(signo, "aries") == 0 || strcmp(signo, "Aries") == 0){
		printf("\nEs signo Aries, su nombre es: %s", nombre);
	}
	else{
		printf("No es signo Aries");
	}
	
	
	
	return 0;
}
