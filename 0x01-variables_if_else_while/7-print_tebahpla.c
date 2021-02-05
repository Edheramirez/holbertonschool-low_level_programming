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
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);


}
