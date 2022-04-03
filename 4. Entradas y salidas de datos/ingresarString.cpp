#include<stdio.h>

int main(){
	
	char x[50];
	
	printf("Digite su nombre: ");
	
	// Ya no es necesario el simbolo & en caso de cadena de caracteres
	// scanf("%s", x); 
	
	// Permite almacenar mas de una cadena
	gets(x);
	
	printf("Su nombre es: %s", x);
	
	return 0;
}
