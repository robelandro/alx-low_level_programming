#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 *
 * @h: pointer to the first node in the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h != NULL)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		count++;
	}
	*h = NULL;
	return (count);
}
