/*
	Problema Nº 1: 
	
	Copiar el contenido de un Array1 de 5 elementos hacia otro Array2.
*/

#include<stdio.h>
#include<conio.h>
void copiandoArrays(int a[], int b[], int tamano);

int main(){
	int array1[5] = {2, 5, 4, 3, 7};
	int array2[5];
	
	printf("Copiando Arrays\n\n");
	
	copiandoArrays(array1, array2, 5);
	
	getch();
	return 0;
}

// a[] = array1
// b[] = array2

void copiandoArrays(int a[], int b[], int tamano){
	int i;
	
	for(i=0;i<tamano;i++){
		b[i] = a[i];           // array2 = array1
	}
	
	for(i=0;i<tamano;i++){
		printf("%i, ", b[i]);  // array2
	}
	
}
