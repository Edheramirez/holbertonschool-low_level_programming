#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to a struct list_t.
 *
 * Return: recursive function and walk trough the nodes.
 */
size_t list_len(const list_t *h)
{
	return (h == NULL ? 0 : 1 + list_len(h->next));
}
