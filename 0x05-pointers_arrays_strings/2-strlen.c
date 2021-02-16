#include "holberton.h"
/**
 * _strlen - returns of a string
 *
 * @s: a pointer the length of a string
 *
 * Return: nothing.
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s++ != '\0')
		i++;

	return (i);
}
