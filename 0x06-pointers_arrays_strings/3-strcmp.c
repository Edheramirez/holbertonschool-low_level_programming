#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: adress of first string
 * @s2: adress of second string
 * Return: result
 **/

int _strcmp(char *s1, char *s2)
{
	int r;
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		r = 0;
		i++;

	}
	r = s1[i] - s2[i];
	return (r);
}
