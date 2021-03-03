#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a result to a new string sum s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int l = 0;
	char *conc;

	if (!s1)
		return (NULL);
	if (!s2)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	conc = malloc(sizeof(char) * (i + j + 1));
	if (conc == NULL)
		return (NULL);

	for (k = 0; k < i + j; k++)
	{
		if (k < i)
			conc[k] = s1[k];

		else
		{
			conc[k] = s2[l];
			l++;
		}
	}
	conc[k] = '\0';
	return (conc);
}
