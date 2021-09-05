#include <stdio.h>
int main (void)
{
int num1;
float res;
int d;
printf("indica la catidad en peso mexicano:   ");
scanf("%i",&num1);

printf("indica la operación de convercion que desea realizar\n 1) dólar estadounidense\n 2) yen\n 3) euro\n 4) rublo ruso\n 5) won\n 6)bitcoin         ");
scanf("%i",&d);

res=0;
switch(d)
{
case 1:
res=(float)num1*(float)0.050;
break;

case 2:
res=(float)num1*(float)5.51;
break;

case 3:
res=(float)num1*(float)0.042;
break;

case 4:
res=(float)num1*(float)3.66;
break;

case 5:
res=(float)num1*(float)58.01;
break;

case 6:
res=(float)num1*(float)0.0000010;
break;

default:
printf("opcion invalida");
}
printf("el resultado de la conversion es:  %.4f\n",res);

return 0;
}
