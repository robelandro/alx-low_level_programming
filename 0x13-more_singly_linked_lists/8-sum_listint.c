#include "lists.h"

/**
 * sum_listint - sums all the nodes of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
