#include "holberton.h"

/**
 * _isalpha - checks for passed character is alphabetic
 *
 * @c: is integer
 *
 * Return: Always 0 (Succes)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
	if (c >= 'A' && c <= 'Z')
		return(1);
	return(0);
}
