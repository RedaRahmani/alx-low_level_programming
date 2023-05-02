#include "lists.h"

/**
 * returns the node at a certain index in a linked list
 * first node in the linked list
 * Write by Redd
 *
 * pointer to the node we're looking for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *T = head;

	while (T && i < index)
	{
		T = T->next;
		i++;
	}

	return (T ? T : NULL);
}

