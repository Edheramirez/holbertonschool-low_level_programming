#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a
 * double linked list.
 * @head: pointer to point a double linked list
 * @n: data inside of node.
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode; /*pointer type struct*/

	if (head == NULL) /*if adress to a variable exist*/
		return (NULL);

	newnode = malloc(sizeof(dlistint_t)); /*reservespaceinmemorynewnode*/
	newnode->n = n; /*give data a newnode*/

	if (newnode != NULL)
	newnode->next = *head; /*new node point to head of old head of a list*/

	if (*head != NULL)
		(*head)->prev = newnode; /*oldnodepointtonextofnewnodeofalist*/

	/*newnode->prev = NULL; It´s mean it´s the first node*/
	*head = newnode;
	return (newnode);
}
