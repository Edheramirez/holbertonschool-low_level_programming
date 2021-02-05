#include <stdio.h>

/**
 * main - Entrty
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;
	char h;

	for (n = 0; n < 10; n++)
		putchar(n + '0');

	for (h = 'a'; h <= 'f'; h++)
		putchar(h);

	putchar('\n');
	return (0);


}
