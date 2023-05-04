#include "main.h"

/**
 * set_bit - donne un bit pour index 1
 * @n: pointeur pointé ua variable
 * @index: index pour le bit de 1
 *
 * Return: 1 valide -1 non valide
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

