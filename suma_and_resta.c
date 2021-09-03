#include<stdio.h> 
int main (void)
{
	int num1,num2, suma=0, resta=0;

	printf("indica el primer valor:   ");
	scanf("%i", &num1);
	printf("indica el segundo valor:   ");
	scanf("%i",&num2);

   suma= num1 + num2;
   resta = num1 - num2;

    printf( "\n El resultado de la suma es: %i", suma );
    printf( "\n El resultado de la resta es: %i", resta );
 
	
	return 0;
}
