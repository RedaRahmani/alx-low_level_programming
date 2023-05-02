#include "lists.h"

/**
 * deletes the head node of a linked list
 * Write by Reda
 *
 * Return: the data was deleted,
 * Return 0 if the list is NULL
 */
int pop_listint(listint_t **head)
{
	listint_t *T;
	int Nt;

	if (!head || !*head)
		return (0);

	Nt = (*head)->n;
	T = (*head)->next;
	free(*head);
	*head = T;

	return (Nt);
}

