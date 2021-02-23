#include "holberton.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: adress to array of 8 memory spaces
 * Return: always 0 (Sucess)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
			_putchar(a[i][j]);
			_putchar('\n');
			}
			else
				_putchar(a[i][j]);
		}
	}
}
