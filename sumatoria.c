#include<stdio.h>
int main (void){
	int A,B,i;
	int nmayor=0, total=0;
	printf("indica el valor de A:  ");
	scanf("%d",&A);
	printf("indica el valor de B:  ");
	scanf("%d",&B);
	
	if (A>B)nmayor=A; else nmayor=B;
	for(i=1; i<nmayor; i++)
	{
		total=total+i;
		printf("%d+",i);
	}
	printf("sumatoria total: %d", total);
	
	return 0;
	
}
