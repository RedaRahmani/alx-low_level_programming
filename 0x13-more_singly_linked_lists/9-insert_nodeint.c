#include "lists.h"

/**
 * inserts a new node in a linked list,
 * write by Reda
 * pointeur in first node in list
 * index when a new node is added
 * data is insert in the new node
 *
 * Return pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *add;
	listint_t *T = *head;

	add = malloc(sizeof(listint_t));
	if (!add || !head)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (add);
	}

	for (i = 0; T && i < idx; i++)
	{
		if (i == idx - 1)
		{
			add->next = T->next;
			T->next = add;
			return (add);
		}
		else
			T = T->next;
	}

	return (NULL);
}

