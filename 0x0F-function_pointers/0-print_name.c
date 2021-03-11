#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints name.
 * @name: pointer to a character array.
 * @f: pointer to a name function.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
