#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* print_listint - prints all the elements of a listint_t list */
size_t print_listint(const listint_t *h);

/* listint_len - returns the number of elements in a linked listint_t list */
size_t listint_len(const listint_t *h);

#endif
