#include "holberton.h"

/**
 * times_table -  lest do it ***
 *
 */

void times_table(void)

{
	int table, number;

	for (table = 0 ; table <= 9; table++)
	{
		for (number = 0; number <= 9 ; number++)
		{
			int times = table * number;

			if (times < 10)
			{
				if (number > 0)
				{
					_putchar(' ');
					_putchar(' ');

			}
			else
			{
				_putchar(' ');
				_putchar('0' + (times / 10));
				_putchar('0' + (times % 10));

			}
			if (number < 9)
				_putchar(',');

		}
		_putchar('\n');
	}
}