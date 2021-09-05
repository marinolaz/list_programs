#include <stdio.h>
int main (void)
{
int num1,num2;
float res;
int d;
printf("indica el primer valor\n");
scanf("%d",&num1);
printf("indica el segundo valor\n");
scanf("%d",&num2);

printf("indica la operación que quiere realizar\n 1) suma\n 2) resta\n 3)multiplicacion\n 4)division ");
scanf("%d",&d);

res=0;
switch(d)
{
case 1:
res=num1+num2;
break;

case 2:
res=num1-num2;
break;

case 3:
res=num1*num2;
break;

case 4:
res=(float)num1/(float)num2;
break;
default:
printf("opcion invalida");
printf("el resultado es%d\n",res);
}
return 0;
}
