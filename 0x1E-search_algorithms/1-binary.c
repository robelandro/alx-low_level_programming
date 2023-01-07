#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lo, hi, mid;

	if (!array || size == 0)
		return (-1);

	lo = 0;
	hi = size - 1;
	while (lo <= hi)
	{
		array_print(array, lo, hi);
		mid = ((hi - lo) / 2) + lo;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			lo = mid + 1;
		if (array[mid] > value)
			hi = mid - 1;
	}
	return (-1);
}
