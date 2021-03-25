#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the first node in the list
 * @idx: index of node to insert
 * @n: value for new node
 *
 * Return: pointer to the indexed node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *prev, *new;

	if (!head)
		return (NULL);

	if (idx != 0)
	{
		prev = *head;
		for (i = 0; i < idx - 1 && prev; i++)
		{
			prev = prev->next;
		}
		if (!prev)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->next = prev->next;
	prev->next = new;
	return (new);
}
