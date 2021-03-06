#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of numbers of s2.
 *
 * Return: new pointer shal point new allocated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
	unsigned int length_s1 = 0, length_s2 = 0, lengthsum;
	char *conc;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");

	for (i = 0; s1[i] != '\0'; i++)
	{
		length_s1 += 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		length_s2 += 1;
	}

	if (n <= length_s2)
		length_s2 = n;

	lengthsum = length_s1 + length_s2;

	conc = malloc(sizeof(char) * lengthsum);

	if (conc == NULL)
		return (NULL);

	for (i = 0; i < lengthsum; i++)
	{
		if (i < length_s1)
			conc[i] = s1[i];
		else
		{
			conc[i] = s2[j];
			j++;
		}
	}
	conc[i] = '\0';
	return (conc);
}
