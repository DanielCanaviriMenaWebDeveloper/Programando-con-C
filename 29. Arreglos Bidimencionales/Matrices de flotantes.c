/*
	Arreglos Bidimencionales (Matrices)
	
	- Matrices de flotantes    <=====
	- Matrices de caracteres
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	float matriz[2][5];  
	
	int i, j;
	
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			printf("Digite un numero matriz[%i][%i]: ", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			printf("%.2f ", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	
	getch();
	return 0;
}
