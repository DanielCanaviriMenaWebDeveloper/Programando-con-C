/*
	11. Calcular la cantidad de segundos que est�n incluidos en el n�mero de horas,
	    minutos y segundos ingresados por el usuario.
*/

#include<stdio.h>

int main(){
	
	int horas, min, seg, totalSegundos;
	
	printf("Digite el n�mero de horas, minutos y segundos: ");
	scanf("%i %i %i", &horas, &min, &seg);
	
	totalSegundos = (horas*3600) + (min*60) + seg;
	
	printf("La cantidad de segundos es: %i", totalSegundos);
	
	
	return 0;
}
