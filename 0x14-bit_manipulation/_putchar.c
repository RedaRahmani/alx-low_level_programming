#include "main.h"
#include <unistd.h>
/**
 * _putchar - ecrire character
 * @c: character
 *
 * Return: dans 1 et valide
 * On error, -1 non valide.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

