#include "main.h"

/**
 * clear_bit - clear the value of a bit at a given index
 * @n: the number to check
 * @index: the index of the bit to check
 *
 * Return: 1 if the bit is 1, 0 if the bit is 0,
 * -1 if the index is out of range
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	for (i = index; i < 63; i++)
	{
		if (*n & (1 << i))
		{
			*n = *n ^ (1 << i);
			return (1);
		}
	}
	return (0);
}
