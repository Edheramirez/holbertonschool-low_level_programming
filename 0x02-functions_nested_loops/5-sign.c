#include "holberton.h"

/**
 * print_sign - print the sign if a number
 *
 *@n: integer
 *
 * Return: 1 is greater than 0, 0 is zero, -1 is lesser than 0.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
