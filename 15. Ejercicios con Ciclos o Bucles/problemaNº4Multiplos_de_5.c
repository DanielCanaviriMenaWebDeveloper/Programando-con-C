/*
	Problema Nº 4 :
	
	Múltiplos de 5 desde 1 hasta n
*/

#include<stdio.h>

int main(){
	
	int n, cont;
	
	printf("Digite el total de numeros a comprobar: ");
	scanf("%i", &n);
	
	cont = 1;
	
	while(cont <= n){
		if(cont % 5 == 0){
			printf("%i.\n", cont);
		}
		cont = cont+1;
	}
	
	return 0;
}
