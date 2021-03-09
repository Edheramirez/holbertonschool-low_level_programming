#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a copy of str
 **/
char *_strdup(char *str)
{
	unsigned int i = 0, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}

/**
 * new_dog - a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a new dog pointer
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n;

	n = malloc(sizeof(dog_t));
	if (n == NULL)
		return (NULL);
	(*n).name = _strdup(name);
	if ((*n).name == NULL)
	{
		free(n);
		return (NULL);
	}
	(*n).owner = _strdup(owner);
	if ((*n).owner == NULL)
	{
		free((*n).name);
		free(n);
		return (NULL);
	}
	(*n).age = age;
	return (n);
}
