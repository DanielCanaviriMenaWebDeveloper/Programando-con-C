/*
	Problema Nº 14 :
	
	Hacer un bucle do-while para imprimir las letras
	minusculas del alfabeto.
*/

#include<stdio.h>

int main(){
	
	char letra = 'a'; //61h(HEX) | 97(DEC)
	
	do{
		printf("%c.\n", letra);
		letra = letra + 1;
	}while(letra<='z'); // 7Ah(HEX) | 122(DEC)
	
	
	return 0;
}
