/*
	Metodo Burbuja
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int array[5] = {4, 6, 1, 2, 9};
	
	int i, j, aux;
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(array[j] > array[j+1]){
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	
	// Ascendente 
	for(i=0;i<5;i++){
		printf("%i ", array[i]);
	}
	
	printf("\n");
	
	// Descendente
	for(i=4;i>=0;i--){
		printf("%i ", array[i]);
	}	
	
	
	getch();
	return 0;
}
