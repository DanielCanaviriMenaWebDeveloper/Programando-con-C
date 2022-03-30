

#include<stdio.h>

int main(){
	
	int cantidad;
	int dinero;
	int suma;
	
	printf("Hola, Aqui inicia el programa\n");
	printf("Digite la cantidad que desea ahorrar: ");
	scanf("%d", &cantidad);
	
	do
	{
		printf("\nAgrega dinero: \n");
		scanf("%d", &dinero);
		suma = suma + dinero;
		printf("Dinero ahorrado hasta el momento: %d", suma);
	}while(suma < cantidad);
	
	printf("\nDinero es: %d", cantidad);
	
	return 0;
}
