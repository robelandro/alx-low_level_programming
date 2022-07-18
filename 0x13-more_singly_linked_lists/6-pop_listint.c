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

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
}
