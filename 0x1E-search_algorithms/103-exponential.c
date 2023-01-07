#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array with
 * the exponential search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t start, end, x;

	if (!array || size == 0)
		return (-1);
	
	start = 0;
	end = 1;
	while (end < size && array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)end, array[end]);
		start = end;
		end *= 2;
	}
	if (end >= size)
		end = size - 1;
	printf("Value found between indexes [%d] and [%d]\n", (int)start, (int)end);
	for (x = start; x <= end; x++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
