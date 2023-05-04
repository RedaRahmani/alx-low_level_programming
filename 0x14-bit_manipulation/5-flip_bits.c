#include "main.h"

/**
 * flip_bits - le nombre de bit changer
 * pour obtenir depuis un nombre a l'autre
 * @n: premier nombre
 * @m: deuxieme nombre
 *
 * Return: le nombre de bit changer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, compteur = 0;
	unsigned long int C;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		C = x >> i;
		if (C & 1)
			compteur++;
	}

	return (compteur);
}

