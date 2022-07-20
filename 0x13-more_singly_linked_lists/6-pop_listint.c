#include "lists.h"

/**
 * pop_listint - removes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the value of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}
