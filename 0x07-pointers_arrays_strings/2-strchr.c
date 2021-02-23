#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: adress to a string
 * @c: character to copies
 * Return: pointer to the first occurrence of the character c in the string s
*/
char *_strchr(char *s, char c)
{
	int i;
	int j;

	for (j = 0; s[j] != '\0'; j++)

	for (i = 0; i <= j; i++, s++)
	{
		if (*s == c)
		return (s);
	}
	return (0);
}
