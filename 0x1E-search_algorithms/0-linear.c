#include "search_algos.h"

/**
 * linear_search - a value in an array searches
 * for integers using linear search.
 * @array: a pointer of the first element of the array.
 * @size: The number of elements in the array.
 * @value: search for value.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)

			return (i);
	}

	return (-1);
}
