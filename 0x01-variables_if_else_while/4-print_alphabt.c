#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entrty
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;

	for (n = 'a'; n >= 'z'; n++)
	{
		while (n != 'q' && n != 'e')
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);

}
