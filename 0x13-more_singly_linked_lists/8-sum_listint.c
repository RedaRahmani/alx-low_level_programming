#include "lists.h"

/**
 * calculates the sum of all the data in a listint_t list
 * Write by Rahmani
 *
 * sum result
 */
int sum_listint(listint_t *head)
{
	int S = 0;
	listint_t *T = head;

	while (T)
	{
		S += T->n;
		T = T->next;
	}

	return (S);
}

