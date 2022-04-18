#include<stdio.h>

int main(){
	
	char vocal;
	
	printf("Digite una vocal: ");
	scanf("%c", &vocal);
	
	switch(vocal){
		case 'a': printf("\Vocal a"); break;
		case 'e': printf("\Vocal e"); break;
		case 'i': printf("\Vocal i"); break;
		case 'o': printf("\Vocal o"); break;
		case 'u': printf("\Vocal u"); break;
		default: printf("Se equivoco, no es una vocal");
	}
	
	return 0;
}
