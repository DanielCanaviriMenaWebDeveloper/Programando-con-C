/*
	Problema Nº6
	Ingrese un número y calcule e imprima su raìz cuadrada. Si el número es 
	negativo imprima el número y un mensaje que diga "tiene raiz imaginaria".
*/

#include<stdio.h>
#include<math.h>

int main(){
	
	int num, raiz;
	printf("Digite un numero: ");
	scanf("%i", &num);
	
	raiz = sqrt(num);
	
	if(num >= 0){
		printf("La raiz cuadrada del numero es: %.1i", raiz);
	}
	else{
		printf("El numero tiene raiz imaginaria.");
	}
	
	return 0;	
}
