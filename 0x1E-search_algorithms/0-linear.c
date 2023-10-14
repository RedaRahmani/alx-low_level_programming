#include "search_algos.h"
/**
 * linear_search - returns first index of where the value is located
 *
 * @array: pointer to array
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of the value, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
