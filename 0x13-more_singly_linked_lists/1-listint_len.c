#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to a data struct.
 *
 * Return: number of elements of a struct.
 */
size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
