#include "lists.h"

/**
 * free linked list
 * listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *T;

	while (head)
	{
		T = head->next;
		free(head);
		head = T;
	}
}

