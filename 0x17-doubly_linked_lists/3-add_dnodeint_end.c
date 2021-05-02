#include "lists.h"

/**
 * add_dnodeint_end - function adds a new node at the end ofadoublelinkedlist.
 * @head: pointer to a point an a double linked list.
 * @n: data of a node.
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	 dlistint_t *lastnode;
	 dlistint_t *wt;

	if (head != NULL) /*evaluate if recibe an adress of variable*/
	{
		wt = *head; /*make a copie of head*/
		while (wt && wt->next != NULL) /*walk trougth node until NULL*/
		{
			wt = wt->next; /*save positions*/
		}
		lastnode = malloc(sizeof(dlistint_t)); /*reservespaceinmemorylastnode*/
		if (lastnode == NULL) /*evaluate if size is NULL*/
			return (NULL);

		lastnode->n = n;/*pass data to a last new nodo*/

		if (wt != NULL)
			wt->next = lastnode; /*link the last node whit new*/
		else
			*head = lastnode;

		lastnode->prev = wt; /*link new node to last node*/
	}
	else
		return (NULL);
	return (lastnode);
}
