#include "main.h"

/**
 * print_binary - writes the binary representation of a number
 * @n: number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1;
	int i, j;

	for (i = 0; i < 63; i++)
	{
		if ((n >> i) == 0)
			break;
	}

	for (j = i; j >= 0; j--)
	{
		if ((n >> j) & m)
			_putchar('1');
		else
			_putchar('0');
	}
}
