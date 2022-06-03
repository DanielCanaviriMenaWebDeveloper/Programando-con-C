/*
	Problema Nº 7:
	
	Hacer una matriz de tipo entera preguntandole al usuario el numero
	de filas y el numero de columnas, rellenar la matriz y luego mostrarla
	en pantalla.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int matriz[50][50], filas, columnas, i, j;
	
	printf("Digite el numero de filas: ");
	scanf("%i", &filas);
	printf("Digite el numero de columnas: ");
	scanf("%i", &columnas);
	
	printf("\n\n");
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("Digite un numero matriz[%i][%i]: ",  i+1, j+1);
			scanf("%i", &matriz[i][j]);
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%i ", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	getch();
	return 0;
}
