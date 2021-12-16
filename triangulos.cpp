//MARINO LACANO ARMANDO
//EXAMEN ESTRAORDINARIO PROGRAMACION EN C
//PARTE 1:3
//16/12/2021
#include <stdio.h>
 int  main(){
 
float a, b,c;
	printf("indica el valor del lado a: ");
	scanf("%f",&a);
	printf("indica el valor del lado b: ");
	scanf("%f",&b);
	printf("indica el valor del lado c: ");
	scanf("%f",&c);
	
    if (a == b && a == c)
        printf( "\nEs un triangulo Equilatero");  
    else if (a == b || a == c || b == c)
       printf("\nEs un triangulo Isosceles");   
    else
        printf("\nEs un triangulo Escaleno");  
 
    return 0;
}
