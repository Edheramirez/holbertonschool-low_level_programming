#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 *
 * Return: parameters constants n.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list r;
	unsigned int i;

	va_start(r, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
				printf("%d\n", va_arg(r, int));
			else
				printf("%d%s", va_arg(r, int), separator);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
				printf("%d\n", va_arg(r, int));
			else
				printf("%d", va_arg(r, int));
		}
	}
	va_end(r);
}
