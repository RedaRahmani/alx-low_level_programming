#include "lists.h"

/**
 * delete_nodeint_at_index
 * Write by Reda
 * index of the node to delete
 *
 * Return 1 "valid", or -1 "error"
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *T = *head;
	listint_t *C = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(T);
		return (1);
	}

	while (i < index - 1)
	{
		if (!T || !(T->next))
			return (-1);
		T = T->next;
		i++;
	}


	C = T->next;
	T->next = C->next;
	free(C);

	return (1);
}

