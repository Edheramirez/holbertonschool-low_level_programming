#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: where we are going to search.
 * @size: length of array.
 * @cmp: pointer to the function to compare values.
 *
 * Return: index of the first element the function doesn´t 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
			    return(i);

	return (-1);
}
