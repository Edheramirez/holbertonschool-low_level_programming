#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

/* print_name - function that prints a name */
void print_name(char *name, void (*f)(char *));

/** array_iterator - function that executes a function given as a parameter
 * on each element of an array.
*/
void array_iterator(int *array, size_t size, void (*action)(int));

/* int_index - function that searches for an integer */
int int_index(int *array, int size, int (*cmp)(int));

#endif
