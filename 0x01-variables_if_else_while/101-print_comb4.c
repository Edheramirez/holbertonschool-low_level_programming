#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int num;

	for (num = 0; num <= 999; num++)
	{
		a = (a / 10 < a % 10);
		b = (b / 10 < b % 10);
		c = (c / 10 < c % 10);
		if ((a > b) && (b > c))
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(c + '0');

		/*if ( < 789)*/

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
