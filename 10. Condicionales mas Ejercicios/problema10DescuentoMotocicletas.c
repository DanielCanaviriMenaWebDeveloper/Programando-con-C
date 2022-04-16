/*
	Problema 10:
	Una distribuidora de motocicletas tiene una promoción de fin de año
	que consiste en lo siguiente.
	- Las motos marca Honda tienen un descuento del 5%.
	- Las marcas Yamaha del 8%.
	- Las Susuki del 10%.
	- Las otras marcas 2%.
*/

#include<stdio.h>
#define HONDA 0.05;
#define YAMAHA 0.08;
#define SUSUKI 0.1;
#define OTROS 0.02;

int main(){
	
	char marca[30];
	float precioMotocicleta, descuento, precioTotal;
	printf("Digite la marca de la motocicleta: ");
	gets(marca);
	
	printf("Digite el precio de la motocicleta: ");
	scanf("%f", &precioMotocicleta);
	
	if(strcmp(marca, "Honda")==0 || strcmp(marca, "honda")==0){
		descuento = precioMotocicleta * HONDA;	
	}else if(strcmp(marca, "Yamaha")==0 || strcmp(marca, "yamaha")==0){
		descuento = precioMotocicleta * YAMAHA;	
	}else if(strcmp(marca, "Susuki")==0 || strcmp(marca, "susuki")==0){
		descuento = precioMotocicleta * SUSUKI;	
	}else{
		descuento = precioMotocicleta * OTROS;
	}
	precioTotal = precioMotocicleta - descuento;
	printf("El precio total de la motocicleta considerando el descuento es : %.2f", precioTotal);
	
	
	return 0;
}
