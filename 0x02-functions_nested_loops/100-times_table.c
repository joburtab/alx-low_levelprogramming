/*
 * File: 100-times_table.c
 * Auth: Michael Ndungu Kamotho
 */

#include "main.h"

/**
 * 100-times_table - function that prints the n times table, starting with 0
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

void times_table(int n){
	int number = 0;
	int by = 0;
	int result, count;
	for(count = 0;count < n; count++){
	
	   for(count = 0; count < 10; count++){
	      result = number * by;
	      by++;
	      _putchar(result);
	   }
	number++;
	_putchar('\n')
	}
}

