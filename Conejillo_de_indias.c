#include <stdio.h>

int main(){
	
	int a,b,i,op;
	i=1;
	
	printf("\n");
	while (i != 0){

		printf("Ingrese el primer numero: ");
		scanf("%d" , &a );
		printf("\n");
	
		printf("Ingrese el segundo numero: " );
		scanf("%d" , &b );
		printf("\n");
	
		printf("Ingrese la letra de la operacion que desea realiza\n");
		printf("||||||||||||||||||||||\n");
		printf("|||1=suma          |||\n");
		printf("|||2=resta         |||\n");
		printf("|||3=multiplicacion|||\n");
		printf("|||4=division      |||\n");
		printf("||||||||||||||||||||||\n");
		printf("Ingrese el numero de la operacion que desea realizar: ");
		scanf("%d" , &op );
		printf("\n");
		switch(op){
			case 1:
				printf("El valor de la suma es: %d\n",(a+b) );
				break;
			case 2:
				printf("El valor de la resta es: %d\n",(a-b) );
				break;
			case 3:
				printf("El valor de la multiplicacion es: %d\n",(a*b) );
				break;
			case 4:
				printf("El valor de la divison es: %d\n",(a/b) );
				break;
			default:
				printf("La letra ingresada no es valida");
				break;
		}
		
		printf("|||||||||||||||||||||||||||\n");
		printf("|||Ingrese 0 para cerrar|||\n");
		printf("|||||||||||||||||||||||||||\n");
		printf("¿Desea cerrar el programa? ");
		scanf("%d" , &i );
		printf("\n");
		printf("\n");
	}
	return 0;
}
