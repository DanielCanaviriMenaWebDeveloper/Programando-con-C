#include <stdio.h>

int main() {
	
	int a,b,c;
	a=b=c=10; 
	
	a = a + 10;

	a += 10; // Es igual a escribir a = a + 10;
	
	a -= 5; // a = a - 5;
	
	a *= 2; // a = a * 2;
	
	a /= 2; // a = a / 2;
	
	printf("El valor de a,b,c es: %i %i %i",a,b,c);
	
	
	return 0;
	
}
