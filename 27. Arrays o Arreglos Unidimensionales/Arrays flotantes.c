/*
	Arrays y Arreglos Unidimensionales
	
	- Arrays flotantes            <=======
	- Arrays de caracter
	- Arrays de String o Palabras

*/

#include<stdio.h>
#include<stdio.h>

int main(){
	
	int i;
	float a[5];
	
	for(i=0;i<5;i++){ 
		printf("%i. Digite un numero: ", i+1);
		scanf("%f", &a[i]);
		
	}
	
	printf("\n\n");
	
	for(i=0;i<5;i++){
		printf("%.2f, ", a[i]);
	}
	
	getch();	
	return 0;
}
