#include "main.h"

/**
 * get_endianness - verifier si la machine est un petit au grand endian
 * Return: 0 pour grand, 1 pour petit
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *C = (char *) &i;

	return (*C);
}

