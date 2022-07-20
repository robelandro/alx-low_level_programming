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
	listint_t *curr, *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	curr = *h;
	while (curr)
	{
		next = curr->next;
		if (curr->n == curr->next->n)
		{
			free(curr);
			curr = next;
			count++;
		}
		else
		{
			curr->next = next;
			curr = next;
		}
	}
	*h = NULL;
	return (count);
}
