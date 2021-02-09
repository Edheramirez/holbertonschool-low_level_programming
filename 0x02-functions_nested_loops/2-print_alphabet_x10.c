#include "holberton.h"

/**
 * print_alphabet_x10 - Print alphabet x10 on screen
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	char alph;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
