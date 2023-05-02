#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t Temp = 0;

	if (h == NULL)
	{
		printf("La liste est vide\n");
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		Temp++;
		h = h->next;
	}

	return (Temp);
}

