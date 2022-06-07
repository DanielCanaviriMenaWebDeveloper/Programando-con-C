/*
	Ordenamiento por Inserción de caracteres
*/

#include<stdio.h>
#include<conio.h>

int main(){
	char a[5] = {2, 1, 2, 1, 3};
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
		printf("%c ", a[i]);
	}
	
	printf("\nDescendente\n");
	for(i=4;i>=0;i--){
		printf("%c ", a[i]);
	}
	
	getch();
	return 0;
}
