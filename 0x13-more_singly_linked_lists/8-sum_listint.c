#include "lists.h"

/**
 * sum_listint - sums two linked lists
 * @l1: first linked list
 * @l2: second linked list
 *
 * Return: sum of two linked lists
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;
	int i;
	
	temp = head;
	sum = 0;
	i = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
		i++;
	}
	return (sum);
}
