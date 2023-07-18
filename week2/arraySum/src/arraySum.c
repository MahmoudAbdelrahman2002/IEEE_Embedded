/*
 ============================================================================
 Name        : arraySum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sumArray(int*ptr,int size)
{
	int sum=0;

	   for (int i = 0; i <size; ++i) {
		sum+=ptr[i];
	}
	   return sum;

}
int main(void) {
	int arr[5]={1,2,3,4,5};
	 printf("%d",sumArray(arr, 5));
}
