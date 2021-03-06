#include "main.h"

/**
 * binary_to_uint - a binary string to an unsigned integer.
 *
 * @b: a binary string.
 * Return: the converted number, or 0
 * if there is one or more chars in the string b that is not 0 or 1b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n = n * 2 + (b[i] - '0');
		i++;
	}
	return (n);
}
