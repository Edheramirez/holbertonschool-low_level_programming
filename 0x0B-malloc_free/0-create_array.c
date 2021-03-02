#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array whit the first char is especific
 * @size: length of an array
 * @c: is a character to initializate
 * Return: NULL if size is 0 or a pointer to array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char  *array;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return ('\0');
	}
	if (!size)
		return ('\0');

	for (; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
