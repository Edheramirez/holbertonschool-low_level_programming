#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to a data structure.
 * @str: pointer to a string.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newend;
	int i;
	list_t *temp = NULL;

	newend = malloc(sizeof(list_t));
	if (newend == NULL)
		return (NULL);

	newend->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
	{}

	newend->len = i;

	if (*head == NULL)
	{
		*head = newend;
		return (newend);
	}

	temp = *head;
	for (i = 0; temp->next != NULL; i++)
	{
		temp = temp->next;
	}
	temp->next = newend;
	return (newend);
}
