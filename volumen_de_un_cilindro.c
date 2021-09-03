#include<stdio.h> 
#include<math.h>
int main (void)
{
	float num1,num2,volumen=0;
	

	printf("indica el valor del radio:   ");
	scanf("%f", &num1);
	printf("indica el valor de la altura:   ");
	scanf("%f",&num2);
	
	volumen=pow(num1,2)*3.1416*num2;
	
    printf( "\n El resultado del calculo es: %f",volumen);
	
	return 0;
}
