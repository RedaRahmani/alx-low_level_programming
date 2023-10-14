#include "search_algos.h"
/**
 * binary_search - returns first index of where the value is located
 *
 * @array: pointer to array
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of the value, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	else
		return (binary_search_rec(array, 0, size - 1, value));

	return (-1);
}


/**
 * binary_search_rec - returns first index of where the value is located
 *
 * @array: pointer to array
 * @low: start index
 * @high: last index
 * @value: value to search for
 *
 * Return: index of the value, otherwise -1
 */
int binary_search_rec(int *array, int low, int high, int value)
{
	unsigned int mid;

	mid = ((high - low) / 2) + low;

	if (low > high)
		return (-1);

	print_array(array, low, high + 1);

	if (array[mid] == value)
		return (array[mid]);

	if (array[mid] > value)
	{
		high = mid - 1;
		return (binary_search_rec(array, 0, high, value));
	}
	else
	{
		low = mid + 1;
		return (binary_search_rec(array, low, high, value));
	}
}


/**
 * print_array - prints the array and subarray
 *
 * @array: the array
 * @size: size of the array
 * @low: index of the first element
 *
 * Return: Void
 */
void print_array(int *array, int low, size_t size)
{
	size_t i = low;

	printf("Searching in array:");
	for (; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i < size - 1)
			printf(",");
		else
			printf("\n");
	}
}
