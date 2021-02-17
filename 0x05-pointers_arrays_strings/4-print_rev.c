#include "holberton.h"

/**
 * print_rev - prints a string in reverse and a new line
 *
 * @s: pointer character we want to set
 *
 * Return: String
*/
void print_rev(char *s)
{
	int a;
	int r;

	for (a = 0; s[a] != '\0'; a++)
	{
	}

	for (r = (a - 1); r >= 0; r--)
	{
		_putchar(s[r]);
	}

	_putchar('\n');
}
