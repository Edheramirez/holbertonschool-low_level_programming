#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers until 98 and new line
 * @n: initial natural number
 * Return: Always 0 (Sucess)
*/
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
	}
	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
