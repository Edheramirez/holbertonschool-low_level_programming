#include <stdio.h>

/**
 * main - entry
 * Return - Always 0 (Succes)
 */
int main(void)
{
	char n;
	char h;

	for (n = 48; n <= 57; n++)
		putchar(n);

	for (h = 'a'; h <= 'f'; h++)
		putchar(h);

	putchar('\n');
	return(0);
}
