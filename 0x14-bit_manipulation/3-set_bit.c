#include "main.h"

/**
 * set_bit - set the value of a bit at a given index
 * @n: the number to check
 * @index: the index of the bit to check
 *
 * Return: 1 if the bit is 1, 0 if the bit is 0, 
 * -1 if the index is out of range
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;
	unsigned int bit = *n & mask;
	unsigned int result = bit >> index;
	if (index > 63)
		return (-1);
	if (result == 1)
		return (1);
	*n = *n | mask;
	return (0);
}
