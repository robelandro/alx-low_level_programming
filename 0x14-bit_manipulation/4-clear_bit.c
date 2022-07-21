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
	if (index > 63)
	return (-1);

	*n &= ~(1 << index);
	return (1);
}
