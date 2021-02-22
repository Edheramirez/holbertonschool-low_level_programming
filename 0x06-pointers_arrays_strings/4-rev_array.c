#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: adress of an array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;
	int *u = a;

	for (i = 0; i < (n - 1); i++)
		u++;

	for (i = 0; i <= n; i++)
		while (a < u)
		{
			t = *a;
			*a = *u;
			*u = t;
			a++;
			u--;
		}
}
