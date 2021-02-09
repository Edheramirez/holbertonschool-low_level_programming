#include "holberton.h"

/**
 * _islower - checks for a lower-case character
 *
 * @c: integer
 * Return: Always 0 (Succes)
 */
int _islower(int c)
{
	if (c >= 93 && c <= 122)
		return (1);
	else
		return (0);
}
