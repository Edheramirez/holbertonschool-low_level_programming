#include "holberton.h"

/**
 * _strncpy - copies max n bytes of a string
 * If there isn´t null byte among the first n bytes of string
 * then will not be null-terminated
 * @dest: the adress will contained return
 * @src: the adress will be copied
 * @n: size of
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	for (x = 0; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
