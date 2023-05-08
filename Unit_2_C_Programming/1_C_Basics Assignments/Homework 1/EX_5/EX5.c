/*
 ============================================================================
 Name        : EX5.c
 Author      : Ahmed Mostafa El Gendy
 Version     : 5/8/2023
 Copyright   : Write C Program to Find ASCII Value of a Character
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char A ;
	scanf("%c",&A);
	fflush(stdout);
	printf("the value of char in ANCII IS %c= %d",A,A);
	return EXIT_SUCCESS;
}
