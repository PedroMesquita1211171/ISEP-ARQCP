#include <stdio.h>
#include "asm.h"

int main()
{
	
	short res = crossSumBytes();
	printf("%hd \n", res);
	
	return 0;
}
