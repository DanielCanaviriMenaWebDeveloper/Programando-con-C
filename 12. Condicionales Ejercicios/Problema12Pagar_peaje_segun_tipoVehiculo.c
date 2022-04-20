/*
	Problema Nº 12: 
	
	Seleccionar un tipo de vehículo e indicar el peaje
	a pagar según un valor numérico
	
	1 - turismo, peaje = $500.
	2 - autobus, peaje = $3000.
	3 - motocicleta, peaje = $300.
	caso contrario - Vehiculo no autorizado.
*/

#include<stdio.h>

#define Turismo 500
#define Autobus 3000
#define Motocicleta 300

int main(){
	
	int numero;
	printf("Ingrese la opcion de vehiculo que abordara \nOpciones: \n1-Turismo\n2-Autobus \n3-Motocicleta \n\n-->");
	scanf("%i", &numero);
	
	printf("\n");
	
	switch(numero)
	{
		case 1:
			printf("Elvalor para el vehiculo de Turismo es de $%i", Turismo);
			break;
			
		case 2:
			printf("Elvalor para el vehiculo de Autobus es de $%i", Autobus);
			break;
			
		case 3:
			printf("Elvalor para el vehiculo de Motocicleta es de $%i", Motocicleta);
			break;
			
		default:
			printf("Vehiculo no autorizado");
	}
	return 0;
}
