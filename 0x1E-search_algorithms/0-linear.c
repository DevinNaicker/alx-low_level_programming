#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * intergers using a linear search algorthm
 *
 * @array: input array
 * @size: size of array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%zu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return ((int)index);
	}
	return (-1);
}
