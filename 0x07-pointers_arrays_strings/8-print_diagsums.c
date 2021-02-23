#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - printsthesum of the two diagonals square matrix of integers
 * @a: adress of array of integers
 * @size: length of matriz
 */
void print_diagsums(int *a, int size)
{
	int i;
	int iterador;
	int count = 0;
	int count2 = 0;

	for (iterador = 0; iterador < size; iterador++)
	{
		i = iterador % size;
		count += a[i + (i * size)];
		count2 += a[i + ((size - 1 - i) * size)];
	}
	printf("%d, %d\n", count, count2);
}
