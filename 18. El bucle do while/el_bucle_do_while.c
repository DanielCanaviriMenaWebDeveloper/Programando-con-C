/*
	Repetición: El bucle do...while
	
	Sintaxis:
	
		do{
		
			Intrucciones...
			
		}while(condicion)
*/

#include<stdio.h>

int main(){
	
	int i;
	
	i = 1;
	
	do {
		printf("%i.\n", i);
		i++;
	}while(i<=10);
	
	return 0;
}
