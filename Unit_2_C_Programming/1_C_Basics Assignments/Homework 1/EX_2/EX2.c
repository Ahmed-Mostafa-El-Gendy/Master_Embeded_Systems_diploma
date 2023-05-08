/*
 ============================================================================
 Name        : EX2.c
 Author      : Ahmed Mostafa El Gendy
 Version     : 5/8/2023
 Copyright   : EX2 : Write C Program to Print a Integer Entered by a User
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x ;
	printf("please Enter a integer: ");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdout);
	printf("your entered %d ", x );
	return EXIT_SUCCESS;
}
