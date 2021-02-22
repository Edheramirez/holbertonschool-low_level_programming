# include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring and find the coincidences
 * @s: adress of a first string
 * @accept: adress of a second string
 * Return: number of coincidences.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j = 0;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[j] == '\0')
		{
			return (c);
		}

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				c += 1;
				break;
			}
		}
	}
	return (c);
}
