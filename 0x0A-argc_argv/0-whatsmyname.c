#include <stdio.h>

/**
 * main - prints its name and new line
 * @argc: number of parameters
 * @argv: array of parameters
 * Return: Always 0 (Sucess)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
