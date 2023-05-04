#include "main.h"

/**
 * print_binary - writes the binary representation of a number
 * @n: number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, capteur = 0;
	unsigned long int C;

	for (i = 63; i >= 0; i--)
	{
		C = n >> i;

		if (C & 1)
		{
			_putchar('1');
			capteur++;
		}
		else if (capteur)
			_putchar('0');
	}
	if (!capteur)
		_putchar('0');
}

