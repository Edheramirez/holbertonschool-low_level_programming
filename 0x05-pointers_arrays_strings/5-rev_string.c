#include "holberton.h"
/**
 * rev_string - reverses a string
 *
 * @s: adress of a character we need to print
 *
 * Return: String
*/
void rev_string(char *s)
{
	int l;
	int i;
	int lp;
	char t[] = " ";

	while (s[l] != '\0')
		l++;

	lp = l - 1;

	for  (i = 0; i < l / 2; i++)
	{
		*t = s[i];
		s[i] = s[lp - i];
		s[lp - i] = *t;
	}
}
