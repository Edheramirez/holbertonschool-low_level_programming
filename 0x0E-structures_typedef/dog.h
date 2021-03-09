#ifndef TYPEDEF_DOG_H
#define TYPEDEF_DOG_H

/**
 * struct dog - information from a pet
 * @name: It´s a name from a pet.
 * @age: It´s an age from a pet.
 * @owner: It´s a name for the owner of a pet.
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* init_dog - function that initialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* print_dog - function that prints a struct dog */
void print_dog(struct dog *d);

#endif
