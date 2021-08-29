#include <math.h>
#include <stdio.h>



int main(void){
	//int n1,n2, div=0,potencia=0;
//int n1,n2;
 //float  div,potencia;
 float n1,n2, div=0,potencia=0;
	
	printf("digite el primer numero:  ");
	scanf("%f",& n1);
	printf("digite el segundo numero:  ");
	scanf("%f",&n2);
	
	div = n1/ n2;
	potencia= pow(n1,n2);
	
	printf("\n El resultado de la divicion es: %f",div);
	printf("\n El resultado de la potencia es: %f",potencia);
	
	
	return 0;
	
}
