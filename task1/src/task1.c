/*
 ============================================================================
 Name        : task1.c
 Author      : Mahmoud Abdelrahman
 ============================================================================
 */
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned char x=0;
	setBit(&x,0);
	printf("%x\n",x);//set 1
	clearBit(&x,0);
	printf("%x\n",x);//print 0
	toggleBit(&x, 0);
	printf("%x",x);//print 1
}
