#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: parameters to sum.
 *
 * Return: sum of parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list r;
	unsigned int i, sum = 0;

	va_start(r, n);

	for (i = 0; i < n; i++)
		sum += va_arg(r, int);

	va_end(r);
	return (sum);
}
