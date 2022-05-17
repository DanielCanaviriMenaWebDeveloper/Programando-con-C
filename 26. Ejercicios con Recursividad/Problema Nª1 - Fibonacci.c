/*
	Problema Nº 1:
	
	Serie Fibonacci con Recursividad
	
	1, 1, 2, 3, 5, 8, 13,...

*/

#include<stdio.h>

int fibonacci(int n);

int main(){
	
	int numero, i;
	
	printf("Digite el numero de elementos de la serie: ");
	scanf("%i", &numero);
	
	for(i=1;i<=numero;i++){
		printf("%i ,",fibonacci(i));
	}
		
	return 0;
}

/*
	0 1 1 2 3 5 6 ...
	fibonacci(1) = 1
	fibonncci(n) = fibonacci(n-1) + fibonacci(n-2);
	
*/

int fibonacci(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return (fibonacci(n-1) + fibonacci(n-2));
	} 
}








