#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: array to look into
 * @size: size of the array
 * @value: value to look for
 *
 * Return: index of the value found, or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, lo, hi;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);
	lo = 0;
	hi = step;

	while (lo < size && array[lo] < value)
	{
		array_print(array, lo, hi);
		lo = hi;
		hi += step;
		if (hi >= size)
			hi = size - 1;
	}

	array_print(array, lo, hi);
	while (lo <= hi && array[lo] <= value)
	{
		if (array[lo] == value)
			return (lo);
		lo++;
	}
	return (-1);
}

/**
 * array_print - prints an array
 * @array: array to print
 * @lo: lower bound
 * @hi: upper bound
 */
void array_print(int *array, size_t lo, size_t hi)
{
	printf("Value checked array[%d] = [%d]\n", (int)lo, array[lo]);
	if (lo < hi)
		printf("Value checked array[%d] = [%d]\n", (int)hi, array[hi]);
}
