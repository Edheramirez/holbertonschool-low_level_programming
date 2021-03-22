#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer to a struct list_t.
 * @str: pointer to a string.
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
	{}

	new->len = i;

	if (*head == NULL)
	{
		*head = new;
		return (new); /*It´s like else if *head is != NULL and finish*/
	}
	/*from here it´s like *head was != NULL*/
	new->next = *head; /* update the new head */
	*head = new;
	return (new);
}
