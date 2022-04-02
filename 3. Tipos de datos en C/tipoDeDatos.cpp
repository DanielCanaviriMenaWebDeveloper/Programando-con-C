#include<stdio.h>

/*
	
	En C tememos 4 grandes tipos de datos: 
	
	1. Basicos
	2. Enumerados
	3. Voids
	4. Derivados
	
	1. Tipo de datos basicos (numericos y caracteres)
	
	 Tipo	         Ejemplo        Tamaño en                    Rango
	                               Bytes y Bits            Minimo --- Maximo
	=================================================================================
	char	          'C'           1byte            -128 a 127 o 0 a 255  
	short             -15           2 (16 bits)      -128          ...    127
	int               1024          2 (16 bits)      -32768        ...    32767
	unsigned int      42325         2 (16 bits)       0            ...    65535
	long              262144        4 (32 bits)      -2147483648   ...    2147483637
	float             10.5          4 (32 bits)       3.4*(10)     ...    3.4*(10)
	double            0.00045       8 (64 bits)       1.7*(10)     ...    1.7*(10)
	long double       le-8          8 (64bits)        igual que double
*/

int main(){
	
	char tipoChar = 'b';
	short tipoShort = -50;
	int tipoInt = 1024;
	unsigned int tipoUnsignedInt = 128;
	long tipoLong = 123456;
	float tipoFloat = 15.456;
	double tipoDouble = 34523.38473647345;
	
	printf("Tipo de dato char: %c", tipoChar);
	printf("\n");
	printf("Tipo de dato short: %i", tipoShort);
	printf("\n");
	printf("Tipo de dato int: %i", tipoInt);
	printf("\n");
	printf("Tipo de dato unsigned int: %i", tipoUnsignedInt); // Solo positivos
	printf("\n");
	printf("Tipo de dato long: %li", tipoLong); // LongInt
	printf("\n");
	printf("Tipo de dato float: %.3f", tipoFloat); // Con 3 decimales
	printf("\n");
	printf("Tipo de dato double: %lf", tipoDouble);
	printf("\n");
	printf("Solo la parte entera de mi numero de tipo double: %.lf", tipoDouble);  // LongFloat
	
	
	
	
	
	return 0;
}
