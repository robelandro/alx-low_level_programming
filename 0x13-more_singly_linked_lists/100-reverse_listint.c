#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;

	while (curr)
	{
		listint_t *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
