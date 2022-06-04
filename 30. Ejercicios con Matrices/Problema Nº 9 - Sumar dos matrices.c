/*
	Problema Nº 9:
	
	Suma dos matrices
*/

#include<stdio.h>
#include<conio.h>
void sumar(matriz1, matriz2);


int main(){
	
	int matriz1[2][2] = {{2,1} , {7,8}};
	int matriz2[2][2] = {{1,3} , {4,2}};
	
	sumar(matriz1, matriz2);
	
	
	getch();
	return 0;
}

void sumar(int a[2][2], int b[2][2]){
	int suma[2][2];
	int i, j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			suma[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%i ", suma[i][j]);
		}
		printf("\n");
	}
}


