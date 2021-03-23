#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: double pointer to a data struct.
 * @n: parameter integer in the data struct
 * Return: new head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = (*head);

	*head = newnode;
	return (newnode);
}
