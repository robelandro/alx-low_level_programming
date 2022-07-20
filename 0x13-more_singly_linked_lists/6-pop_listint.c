#include "lists.h"

/**
 * pop_listint_tail - deletes the tail node of a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: the value of the deleted node
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
