#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size:  bytes.
 *
 * Return: pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *buffer;

	buffer = malloc(size * nmemb);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; size * nmemb > i; i++)
		*(buffer + i) = 0;

	return (buffer);
}
