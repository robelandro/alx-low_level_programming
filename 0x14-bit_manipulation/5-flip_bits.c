#include "main.h"

/**
 * flip_bits - flip the bits of a number
 * @n: the number to flip
 * @m: the number to flip
 *
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{	
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = (n ^ m) >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
