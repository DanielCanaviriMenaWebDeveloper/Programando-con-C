/*
	Problema N�6
	Ingrese un n�mero y calcule e imprima su ra�z cuadrada. Si el n�mero es 
	negativo imprima el n�mero y un mensaje que diga "tiene raiz imaginaria".
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
