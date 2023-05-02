#include "lists.h"

/**
 * add node to the end of linked list
 * pointer in the first element in  list
 * data  insert in a new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *T = *head;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	while (T->next)
		T = T->next;

	T->next = add;

	return (add);
}

