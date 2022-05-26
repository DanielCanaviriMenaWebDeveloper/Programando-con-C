/*
	Arrays y Arreglos Unidimensionales
	
	- Arrays enteros              <=======
	- Arrays flotantes
	- Arrays de caracter
	- Arrays de String o Palabras

*/

#include<stdio.h>
#include<stdio.h>

int main(){
	
	int i, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	// Forma de recorrer un array y mostrar sus elementos.
	for(i=0;i<10;i++){ 
		printf("%i, ", a[i]);
	}
	
	getch();	
	return 0;
}
