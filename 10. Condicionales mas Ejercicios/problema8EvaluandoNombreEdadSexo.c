/*
	Problema 8:
	Ingresar por teclado el nombre, la edad y el sexo de cualquier persona
	e imprima, solo si la persona es de sexo masculino y mayor de edad, el nombre
	de la persona.
	
	Nota: Consideraremos a una persona mayor de edad cuando tiene 18 años para adelante.
*/

#include<stdio.h>

int main(){
	
	char nombre[30], sexo[10];
	int edad;
	
	printf("Digite su nombre: ");
	gets(nombre);
	printf("Digite su sexo: ");
	gets(sexo);
	printf("Digite su edad: ");
	scanf("%i", &edad);
	
	if(strcmp(sexo, "Masculino") == 0 && edad >= 18 ){
		printf("Tu nombre es: %s", nombre);
	}
	else{
		printf("Usted no es de sexo Masculino o no es mayor de edad.");
	}
	
	return 0;
}
