#include "holberton.h"

/**
 * puts_half - prints half of a string and new line
 *
 * @str: adress of a string
 *
 * Return: half of a string
*/
void puts_half(char *str)
{
	int i;
	int m;
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
	}
	if (l % 2 == 0)
		m = l / 2;
	else
		m = (l + 1) / 2;

	for (i = m; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
