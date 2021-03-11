#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - funct.exec.funct.given as a parameteroneachelement of array
 * @array: has elements to execute.
 * @size: the size of the array.
 * @action: pointer to the function to use.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
