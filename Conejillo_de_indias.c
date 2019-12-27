#include <stdio.h>

int main(){
	
	int a,b;
	
	printf("Ingrese el primer numero: ");
	scanf("%d" , &a );
	printf("\n");
	
	printf("Ingrese el segundo numero: " );
	scanf("%d" , &b );
	printf("\n");
	
	if( a%b == 0){
		printf("Los numeros son divisibles");
	}
	else{
		printf("Los numeros no son divisibles");
	}
	
	return 0;
}
