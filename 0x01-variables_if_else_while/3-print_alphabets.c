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
	char u;
	char lo;

	for (lo = 'a'; lo <= 'z'; lo++)
		putchar(lo);

	for (u = 'A'; u <= 'Z'; u++)
		putchar(u);

	putchar('\n');
	return (0);
}
