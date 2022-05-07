/*
	Determinar si un número es par o impar

*/

#include<stdio.h>

int comprobarNumero(int n);
void verificaNumero(int n);

int main(){
	
	int numero, x, y;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	
	x = comprobarNumero(numero);
	
	
	if(x==0){
		printf("\nEl numero es par");
	}
	else{
		printf("\nEl numero es impar");
	}
	
	verificaNumero(numero);
	
	return 0;
}

int comprobarNumero(int n){
	if(n%2==0)
		return 0;
	else
		return 1;
}

void verificaNumero(int n){
	if(n%2==0)
		printf("\nEl numero es par");
	else
		printf("\nEl numero es impar");
}
