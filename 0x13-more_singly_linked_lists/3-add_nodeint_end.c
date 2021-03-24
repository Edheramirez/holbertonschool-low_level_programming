#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to a data structure
 * @n: integer
 *
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newend = NULL;
	listint_t *temp = NULL;

	newend = malloc(sizeof(listint_t));
	if (newend == NULL)
		return (NULL);

	newend->n = n;
	newend->next = NULL;

	if (*head == NULL)
	{
		*head = newend;
		return (newend);
	}

	for (temp = *head; temp->next != NULL; temp = temp->next)
	{}

	temp->next = newend;
	return (newend);
}
