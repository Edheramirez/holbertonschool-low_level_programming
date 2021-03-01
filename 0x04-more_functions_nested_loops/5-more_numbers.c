#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers,
 *from 0 to 14, followed by a new line..
 *
 * Return: void
 */

void more_numbers(void)
{
	int c;
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			c = b * 10;
			if (b >= 10)
			{
				c = b;
			}
			_putchar((c / 10) + '0');
			if (b >= 10)
			{
				_putchar((b % 10) + '0');
			}
		}
		_putchar(10);
	}
}
