#include <stdio.h>
#include "asm.h"

	int num=5;
	int vec[]={1,2,3,4,5};
	int *ptrvec=vec;
	int i;
	
int main(int ac, char** av){
	
	printf("\n");
	for(i=0;i<num;i++){
		printf("%d \n", *(ptrvec+i));
	}
	
	vec_add_two();
	
	printf("\n");
	for(i=0;i<num;i++){
		printf("%d \n", *(ptrvec+i));
	}
	
	printf("\n");
	
	return 0;
	
}
