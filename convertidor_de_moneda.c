#include<stdio.h> 
int main (void)
{
	float n1,multiplicacion=0;

	printf("CONVERTIDOR DE MONEDA (PESO MEXICANO A EURO)\n indica la cantidad a aconvertir:   ");
	scanf("%f", &n1);


   multiplicacion=n1*0.042;

    printf( "\n El resultado de la convercion de peso a euro es: %f", multiplicacion );
    
 
	
	return 0;
}
