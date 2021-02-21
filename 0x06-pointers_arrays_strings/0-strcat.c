#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string adress
 * @src: string adress
 * Return: dest adress with appends strings
*/
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (i);
}
