#include<stdio.h>

int hr=0, min=0, seg=0;
int conth=0, contm=0, conts=0;
int flag=0;

void progtimer(){
	printf("ingrese el tiempo meta: ");
	printf("\nHr: ");
	scanf("%i",&hr);
	printf("\nMin: ");
	scanf("%i",&min);
	printf("\nSeg: ");
	scanf("%i",&seg);
}
void cronometro(){
	while(flag==0){
		
		if(conts ==59){
			contm++;
			conts=0;
		}else{
		conts++;
		}
		if(contm==59){
			conth++;
			contm=0;
		}
		printf("\n tiempo: %i: %i: %i",conth, contm, conts);
		
		if(conth == hr && contm == min && conts == seg){
			break;
		}
	}
}
int main(){
	progtimer();
	cronometro();
	return 0;
}
