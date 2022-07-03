#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: minmum value
 * @max: maximum value
 * Return: int*
 */
int *array_range(int min, int max)
{
	int *array_int;
	int i;
	int diffrence = max - min;

	if (min > max)
	return (NULL);
	array_int = malloc(sizeof(int) * (diffrence + 1));
	if (array_int == NULL)
	return (NULL);
	for (i = 0; i <= diffrence; i++)
	{
		array_int[i] = min;
		min++;
	}
	return (array_int);
}
