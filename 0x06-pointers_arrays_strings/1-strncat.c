#include "holberton.h"

/**
 * *_strncat - concatenates two strings whitout limit
 * @dest: adress of resulting string
 * @src: adress of a string
 * @n: integer
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int x = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	while (x < n && src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	return (dest);
}
