#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n:  is the number of strings passed to the function.
 *
 * Return: print string followed by new line.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list r;
	unsigned int i;
	char *c;

	va_start(r, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(r, char *);
		if (c == NULL)
		{
			printf("nil");
		}
		printf("%s", c);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(r);
	printf("\n");
}
