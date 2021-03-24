#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: double pointer to a data struct.
 *
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *f;

	if (!head)
		return;

	while (*head)
	{
		f = (*head)->next;
		free(*head);
		*head = f;
	}
}
