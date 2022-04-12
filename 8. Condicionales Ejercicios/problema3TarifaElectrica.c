/*
	3. Visualizar la tarifa de la luz según el gasto de corriente eléctrica.
	Para un gasto menor de 1.000Kwxh la tarifa es 1.2, 
	entre 1.000 y 1.850Kwxh es 1.0 y 
	mayor de 1.850Kwxh la tarifa es de 0.9
*/

#include<stdio.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main(){
	
	float gasto, tarifa;
	printf("Digite la cantidad del gasto de corriente electrica: ");
	scanf("%f", &gasto);
	
	if(gasto < 1000){
		tarifa = TARIFA1;
	}
	
	if(gasto >= 1000 && gasto <= 1850){
		tarifa = TARIFA2;
	}
	
	if(gasto > 1850){
		tarifa = TARIFA3;
	}
	
	printf("La tarifa de la luz es: %.1f", tarifa);
	
	
	
	return 0;
}
