/*
	Problema 15:
	
	Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dolares.
*/

#include<stdio.h>

int main(){
	
	int opcion;
	float saldo = 1000, agregar, retirar;
	
	printf("\tBienvenido a su Cajero Virtual");
	printf("\n1. Ingreso en cuenta");
	printf("\n2. Retirar dinero de la cuenta");
	printf("\n3. Salir");
	printf("\nOpcion: ");
	scanf("%i", &opcion);
	
	switch(opcion){
		case 1: printf("\Cuanto dinero desea ingresar en la cuenta: ");
				scanf("%f", &agregar);
				saldo = saldo + agregar;
				printf("El saldo total es de: %.2f", saldo);
		break;
		
		case 2: printf("Cuanto dinero desea retirar: ");
				scanf("%f", &retirar);
				if(retirar > saldo){
					printf("La cantidad a retirar es mayor al saldo");
				}
				else{
					saldo = saldo - retirar;
					printf("El saldo disponible es de: %.2f", saldo);
				}
		break;
		
		case 3: break;
		default: printf("Se equivoco de opcion de menu");
				
		
	}
	
	
	
	return 0;
}
