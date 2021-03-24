#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to a data struct.
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
