#include <stdio.h>
int main(){
	float numeros[10];
	float promedio=0;
	printf("calculadora de media \n");
	for (int i=0; i<10; i++){
		printf("dame el numero %d: ",i+1);
		scanf("%f",&numeros[i]);
		promedio+=numeros[i];
		printf("\n");
	}
	printf("el promedio de los numeros es: %.2f\n",promedio/10);
	
return 0;
}

