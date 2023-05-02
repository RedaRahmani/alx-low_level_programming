#include "lists.h"

/**
 * alx software
 * Written by Rahmani Mohamed Reda
 *
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the linked listint_t list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t Temp = 0;

	while (h)
	{
		Temp++;
		h = h->next;
	}

	return (Temp);
}

