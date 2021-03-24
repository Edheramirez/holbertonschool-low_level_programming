#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data n.
 * @head: double pointer to a data structure.
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	int s;
	listint_t *temp;

	if (!head)
		return (0);

	s = (*head)->n;
	temp = (*head);
	*head = (*head)->next;
	free(temp);

	return (s);
}
