#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer
 * @b: integer
 * Return: Always 0 (Sucess)
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
