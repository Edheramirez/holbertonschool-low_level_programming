#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src, including null byte
 * @dest: adress destination the copy
 * @src: original adress
 * Return: copy pointer
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
