#include<stdio.h>
#include<math.h>

int main(){
	float a,volumen=0;
	printf("calculadora de volumenes de cubos \n ingre la medida de uno de los lados de el cubo:  ");
	scanf("%f",&a);
	
	volumen=pow(a,3);
	
	printf("El volumen de su cubo es:  %.2f",volumen);
	
	
	return 0;
}
