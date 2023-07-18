/*
 ============================================================================
 Name        : pointerToFunction.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float add (float a,float b);
float sub (float a,float b);
float mul (float a,float b);
float division(float a,float b);
float operatoin(int a,int b,float (*ptr)(float,float));
int main(void) {
float x=10,y=5;
float res=operatoin(x, y, add);
printf("%f",res);

}
float operatoin(int a,int b,float (*ptr)(float,float))
{
	return (*ptr)(a,b);
}
float add (float a,float b)
{
	return a+b;
}
float sub (float a,float b)
{
	return a-b;
}
float mul(float a,float b)
{
	return a*b;
}
float division(float a,float b)
{
	return a/b;
}
