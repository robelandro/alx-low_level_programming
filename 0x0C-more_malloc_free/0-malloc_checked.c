#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory
 *
 * @b : size of memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *v;

	v = malloc(b);

	if (v == NULL)
	{
		exit(98);
	}
	else
	{
		return (v);
	}
}
