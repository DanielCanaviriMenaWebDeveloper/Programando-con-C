/*
	Ejercicio 3: La hipotenusa de un triangulo rectángulo,
	pidiendo al usuario el valor de los 2 catetos.
*/

#include<stdio.h>
#include<math.h>

int main(){
	float hipotenusa, cateto1, cateto2;
	
	printf("Digite los 2 catetos: ");
	scanf("%f %f",&cateto1,&cateto2);
	
	hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
	
	printf("La hipotenusa del triangulo es: %.2f", hipotenusa);
	
	return 0;
}

