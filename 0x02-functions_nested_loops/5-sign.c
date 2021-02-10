#include "holberton.h"

/**
 * print_sign - print the sign if a number
 *
 *@n: integer
 *
 * Return: Always 0 (Succes)
*/
int print_sign(int n);
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}

	if (n == 0)
	{
		return (0);
		_putchar('0');
	}

	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
}
