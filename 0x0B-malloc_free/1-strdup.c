#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup -  returns pointer a newly allocated space in memorywhit copy string
 * @str: adress of array
 * Return: pointer to duplicate string - or NULL if insuficient memory or NULL
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *dupl;

	if (!str)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

	dupl = malloc(sizeof(char) * (i + 1));
	
	if (dupl == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		dupl[j] = str[j];

	return (dupl);
}
