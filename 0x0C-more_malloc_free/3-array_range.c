#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer.
 * @max: last integer.
 *
 * Return: pointer of new array.
 */
int *array_range(int min, int max)
{
	int i;
	int *range;

	if (min > max)
		return (NULL);

	range = malloc(max - min + 1);
	if (range == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		*(range + i) = min;

	return(range);
}
