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

	if (d->name == NULL)
		printf("Name: nil");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
