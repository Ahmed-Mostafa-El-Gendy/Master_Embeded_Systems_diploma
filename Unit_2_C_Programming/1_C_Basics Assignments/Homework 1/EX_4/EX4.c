/*
 ============================================================================
 Name        : EX4.c
 Author      : Ahmed Mostafa El Gendy
 Version     : 5/8/2023
 Copyright   : Write C Program to Multiply two Floating Point Numbers
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x , y ;
	printf("please enter the two numbers : ");
	fflush(stdout);
	scanf("%f%f",&x,&y);
	fflush(stdout);
	printf("the multiply two numbers is = %f ",x*y);
	return EXIT_SUCCESS;
}
