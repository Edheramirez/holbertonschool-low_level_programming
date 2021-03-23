#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* print_listint - prints all the elements of a listint_t list */
size_t print_listint(const listint_t *h);

/* listint_len - returns the number of elements in a linked listint_t list */
size_t listint_len(const listint_t *h);

/* add_nodeint - adds a new node at the beginning of a listint_t list */
listint_t *add_nodeint(listint_t **head, const int n);

/* add_nodeint_end - adds a new node at the end of a listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* free_listint - frees a listint_t list. */
void free_listint(listint_t *head);

/* free_listint2 - frees a listint_t list */
void free_listint2(listint_t **head);

/* pop_listint - deletes the head node of a listint_t */
int pop_listint(listint_t **head);

/* get_nodeint_at_index - returns the nth node of a listint_t linked list */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* sum_listint - returns the sum of all the data (n) of a listint_t */
int sum_listint(listint_t *head);

/* insert_nodeint_at_index - inserts a new node at a given position */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* insert_nodeint_at_index - inserts a new node at a given position */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* delete_nodeint_at_index - deletes the node at index index of a listint_t */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif
