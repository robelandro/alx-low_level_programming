#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: - pointer to the first node in the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr, *next;
	size_t count = 0;

	if (head == NULL)
		return (0);

	curr = head;
	while (curr)
	{
		next = curr->next;
		if (curr->n == curr->next->n)
		{
			printf("%p -> %p [%d]\n", curr, curr->next, curr->n);
			curr = next;
			count++;
		}
		else
		{
			printf("%p -> %p [%d]\n", curr, next, curr->n);
			curr = next;
		}
	}
	return (count);
}
