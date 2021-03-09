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
	{
		return;
	}

	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner);
	}

	else
	{
		printf("Name: %s\n", "nil");
		printf("age: %s\n", "nil");
		printf("owner: %s\n", "nil");

	}
}
