#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: - pointer to the first node in the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t *next;
	size_t count = 0;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		next = current->next;
		printf("%d\n", current->n);
		current = next;
		count++;
	}
	return (count);
}
