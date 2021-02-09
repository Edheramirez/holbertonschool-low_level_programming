#include "holberton.h"

/**
 * print_alphabet - print alphabet on screen
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
