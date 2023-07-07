#include "hash_tables.h"

/**
 * key_index - Get the index a key pair shld be stored in array of a hash table
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)

{
	/* check size */
	if (!size)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
