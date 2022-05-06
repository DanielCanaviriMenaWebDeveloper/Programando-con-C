/*
	Funciones: En c existen 2 tipos de funciones. 
	
		- Funciones sin retorno de valor:
		
			void nombreFuncion( parametros ){
			
				Instrucciones...
				
			}
			
		- Funciones con retorno de valor:
		
			tipo_dato nombreFuncion( parametros ){
				
				Instrucciones...
				
				return expresion
			}

*/

//1. Saludo por pantalla con función void
//2. Sumar 2 números

#include<stdio.h>
// Prototipos
void saludo();
int suma(int a, int b);

int main(){
	
	int n1, n2;
	
	saludo();
	
	printf("\nIngrese los 2 numeros: ");
	scanf("%i %i", &n1, &n2);
	
	printf("\nLa suma de los numeros es: %i\n", suma(n1, n2));
	
	return 0;
}

void saludo(){		
	printf("\nHola que tal me llamo Daniel.\n");
}

int suma(int a, int b){
	 
	 int suma = 0;
	 
	 suma = a + b;
	 
	 return suma;
}

