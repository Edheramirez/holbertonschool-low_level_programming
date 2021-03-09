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

	}

	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

	if (d == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: (nil)\n");
		printf("Owner: (nil)\n");
	}
}
