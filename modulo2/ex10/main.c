#include <stdio.h>
#include "asm.h"

int op1=0, op2=0, op3=0;

int main(){
	printf("Valor op1:");
	scanf("%d",&op1);
	printf("Valor op2:");
	scanf("%d",&op2);
	printf("Valor op3:");
	scanf("%d",&op3);
	
	printf("%lld\n", sum3ints());
	return 0;
}
