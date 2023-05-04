#include "main.h"

/**
 * clear_bit - donne la valeur 0
 * @n: pointeur pointé sur variable a changer
 * @index: index de bit 
 *
 * Return: 1 valide, -1 non valide
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

