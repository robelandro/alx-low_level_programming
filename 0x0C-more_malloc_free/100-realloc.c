#include "main.h"
#include <stdlib.h>

/**
 * _realloc - that reallocates a memory block using malloc and free
 *
 * @ptr:a pointer to the memory previously allocated
 * @old_size:the size, in bytes, of the allocated space for ptr
 * @new_size:the new size, in bytes of the new memory block
 * Return: void*
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *out;
	unsigned int cou;

	if (new_size == old_size)
	return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	out = malloc(new_size);
	if (out == NULL)
	return (NULL);

	if (ptr == NULL)
	{
		free(ptr);
		return (out);
	}

	for (cou = 0; cou < old_size; cou++)
	out[cou] = *(char *)ptr + cou;

	free(ptr);

	return (out);
}
