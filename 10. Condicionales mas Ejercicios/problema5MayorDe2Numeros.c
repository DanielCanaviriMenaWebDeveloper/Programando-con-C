/*
	5. Calcular el mayor de dos números leídos del teclado 
	y vosualizarlo en pantalla.
*/

#include<stdio.h>

int main(){
	
	float num1, num2, may;
	printf("Digite 2 numeros: ");
	scanf("%f %f", &num1, &num2);
	
	if(num1 > num2)
		printf("\nEl mayor es: %.2f", num1);
	else if(num2 > num1){
		printf("\nEl mayor es: %.2f", num2);
	}
	else {
		printf("\nAmbos numeros son iguales");
	}
	
		

	return 0;
}
