#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: count elements of array
 * @av: adress of a array
 *
 * Return: pointers to a new string or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k;
	int l = 0;
	char *conc;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		}
		k += j;
	}

	conc = malloc(sizeof(char) * (k + ac));
	if (conc == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			conc[l] = av[i][j];
			l++;
		}
		conc[l] = '\n';
		l++;
	}
	return (conc);
}
