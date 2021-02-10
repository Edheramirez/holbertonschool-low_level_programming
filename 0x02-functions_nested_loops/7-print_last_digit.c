#include "holberton.h"

/**
 * print_last_digit - prits the last digit of a number
 * @l: integer
 * Return: l (Succes)
*/

int print_last_digit(int l)
{
	int p;

	p = (l % 10);
	if (p < 0)
		p =(p * -1);

	_putchar(p + '0');
	return (p);
}
