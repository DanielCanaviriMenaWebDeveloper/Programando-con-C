/*
	Arreglos Bidimencionales (Matrices)
	
	- Matrices de enteros      <=====
	- Matrices de flotantes
	- Matrices de caracteres
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	// int matriz[2][3] = {51,52,53 , 54,55,56};     // 1ra Forma de llenar una matriz
	int matriz[2][3] = {{12, 45, 23} , {34, 29, 4}};  // 2da Forma de llenar una matriz
	
	int filas, columnas;
	
	for(filas=0;filas<2;filas++){
		for(columnas=0;columnas<3;columnas++){
			printf("%i ", matriz[filas][columnas]);
		}
		printf("\n");
	}
	
	
	
	getch();
	return 0;
}
