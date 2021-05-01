#include "lists.h"

/**
 * print_dlistint-prints all the elements of a double linked list
 *@h: pointer a double linked list
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		printf("%d\n", h->n);
		return (1 + print_dlistint(h->next));
	}
}
