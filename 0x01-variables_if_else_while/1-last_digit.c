#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 5)
		printf("Last digit of %n is %n and is less than 6 and not 0\n", n, m);
	else if (n == 0)
		printf("Last digit of %n is %n and is 0\n", n);
	else if (n > 5)
	printf("Last digit of %n is %n and is greater than 6 and not 0\n", n, m);
	return (0);
}
