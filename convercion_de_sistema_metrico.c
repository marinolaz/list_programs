#include<stdio.h> 
int main (void)
{
	float n1,multiplicacion=0;

	printf("CALCULADORA DE PULGADAS A CENTIMETROS\n ingrese la medida en puelgadas:   ");
	scanf("%f", &n1);


   multiplicacion=n1*2.54;

    printf( " Resultado en centimetros: %.2f", multiplicacion );
    
	return 0;
}
