/*
	Ordenamiento por Inserción
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int a[5] = {3, 1, 4, 2, 5};
	int i, pos, aux;
	
	for(i=0;i<5;i++){
		pos = i;
		aux = a[i];
		while((pos>0)&&(aux<a[pos-1])){
			a[pos] = a[pos-1];
			pos--;
		}
		a[pos] = aux;
	}
	
	printf("Ascendente\n");
	for(i=0;i<5;i++){
		printf("%i ", a[i]);
	}
	
	printf("\nDescendente\n");
	for(i=4;i>=0;i--){
		printf("%i ", a[i]);
	}
	
	getch();
	return 0;
}
