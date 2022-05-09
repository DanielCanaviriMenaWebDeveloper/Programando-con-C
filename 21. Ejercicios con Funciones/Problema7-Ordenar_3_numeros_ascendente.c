/*
	Problema Nº7:
	
	Hacer un programa que muestre 3 números ordenados ascendentemente, 
	utilizar un procedimiento para cada operación.
*/

#include<stdio.h>
void ascendente(int n1, int n2, int n3);

int main(){
	
	int n1, n2, n3;
	
	printf("Digite 3 numeros: ");
	scanf("%i %i %i", &n1, &n2, &n3);
	
	ascendente(n1, n2, n3);
	
	
	
	
	return 0;
}

void ascendente(int n1, int n2, int n3){
	if(n1>=n2 && n1>=n3){
		if(n2>=n3){
			printf("%i %i %i", n3, n2, n1);
		}
		else{
			printf("%i %i %i", n2, n3, n1);
		}
	}
	
	if(n2>=n1 && n2>=n3){
		if(n1>=n3){
			printf("%i %i %i", n3, n1, n2);
		}
		else{
			printf("%i %i %i", n1, n3, n2);
		}
	}
	
	if(n3>=n1 && n3>=n2){
		if(n1>=n2){
			printf("%i %i %i", n2, n1, n3);
		}
		else{
			printf("%i %i %i", n1, n2, n3);
		}
	}
}
