/*
	9. Calcular el nuevo salario de un obrero si obtuvo un incremento del 25%
	sobre su salario anterior.
*/

#include<stdio.h>

int main(){
	
	float salario, incremento, salario_final;
	
	printf("Digite su salario: ");
	
	scanf("%f", &salario);
	
	incremento = salario * 0.25;
	
	salario_final = salario + incremento;
	
	printf("El salario con aumento del 25 porciento es: %.2f", salario_final);
	
	return 0;
}
