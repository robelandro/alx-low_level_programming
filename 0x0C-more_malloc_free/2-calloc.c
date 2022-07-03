#include "main.h"
#include <stdlib.h>
/**
 *  _calloc - a function that allocates memory for an array
 *
 * @nmemb: given array
 * @size: size need to be allocated
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	return (NULL);
	result = malloc(nmemb * size);
	if (result = NULL)
	return (NULL);
	for (i = 0; i < nmemb * size; i++)
	result[i] = 0;
	return (result);
}
