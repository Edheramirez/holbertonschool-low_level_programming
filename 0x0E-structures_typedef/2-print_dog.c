#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print_dog
 * @d: user.
 *
 * Return: Always 0 (Succes).
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("%c\n", 32);

	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Name: %f\n", d->age);
		printf("Name: %s\n", d->owner);
	}

	else
	{
		printf("Name: %s\n", "nil");
		printf("Name: %s\n", "nil");
		printf("Name: %s\n", "nil");

	}
}
