#include "main.h"

/**
 * get_bit - donnez un bit une valeur dicimal
 * @n: nombre de recherche
 * @index: index de bit
 *
 * Return: valeur de bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int Bv;

	if (index > 63)
		return (-1);

	Bv = (n >> index) & 1;

	return (Bv);
}

