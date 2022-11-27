#include <stdio.h>
#include "asm.h"

int main(void){

	int i;
	char x = 9;
	
	int vec1[] = {9, 6, 34, 0, 6, 13, 9, 56, 10, 7};
	int vec2[10];
	
	printf("x = %d\n", x);
	
	printf("vec1: ");
	for(i = 0; i < 10; i++){
		printf("%d ", vec1[i]);
	}
	printf("\n");
	
	add_byte(x, vec1, vec2);
	
	printf("vec2: ");
	for(i = 0; i < 10; i++){
		printf("%d ", vec2[i]);
	}
	printf("\n");

	return 0;
}
