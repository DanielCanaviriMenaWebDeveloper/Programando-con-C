/*
	Problema Nº 12
	
	Serie Fibonacci
	
	Ejemplo: 
	
	Para n números: 
		
		Sea n = 8
	
		0, 1, 1, 2, 3, 5, 8, 13
*/

#include<stdio.h>

int main(){
	
	int numero, i, z = 0, x = -1, y = 1;
	
	printf("Digite el numero de elementos: ");
	scanf("%i", &numero);
	
	for(i=1;i<=numero;i++){
		z = x + y;
		x = y;
		y = z;
		
		if(i==numero)
			printf("%i", z);
		else
			printf("%i, ", z);
	}
	return 0; 
}
