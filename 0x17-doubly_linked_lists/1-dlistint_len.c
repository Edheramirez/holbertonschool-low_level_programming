#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked.
 * @h: pointer to an double linked list.
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + dlistint_len(h->next));
}
