/* 
	Problema Nº 9:
	Hacer un programa que borre la pantalla al pulsar 1.
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	
	char tecla;
	
	printf("Programa de Borrado de pantalla!!!!!");
	printf("\n-------------------------------------\n");
	printf("\n-------------------------------------\n");	
	printf("\nDigite el numero 1: ");
	scanf("%c", &tecla);
	
	if(tecla == '1'){
		system("cls");
		printf("Ha funcionado, el limpiado de pantalla");
	}
	else{
		fflush(stdin); // Permite el borrado del buffer(espacio de memoria). 
		printf("\nNo ha funcionado el limpiado de pantalla");
		printf("\nPor favor, digite el numero 1: ");
		scanf("%c", &tecla);
		if(tecla == '1'){
			system("cls");
			printf("Perfecto si funciono!!!");
		}
		else{
			printf("No funciono");
		}
	}	
	
	
	return 0;
}
