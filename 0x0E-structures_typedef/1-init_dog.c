#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: user.
 * @name: It´s name of a pet.
 * @age: It´s a age of a pet.
 * @owner: It´s a name of the owner of a pet.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
