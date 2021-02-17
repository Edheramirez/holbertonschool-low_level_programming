#include "holberton.h"

/**
 * _puts - print a string follwed by a new line
 *
 * @str: string
 *
 * Return - String
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(*str);
	_putchar(10);
}
