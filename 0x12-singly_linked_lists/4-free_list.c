#include "lists.h"

/**
 * free_list - free_list.
 * @head: pointer to first node.
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
