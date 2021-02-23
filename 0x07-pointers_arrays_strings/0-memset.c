#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to memory area to fill it
 * @b: character to fill memory area with
 * @n: tne number of bytes to be filled unsigned int
 * Return: pointer with memory area full @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	n--;

	return (s);
}
