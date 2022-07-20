#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: head of the list
 * @index: index of the list where the new node will be inserted
 *
 * Return: address of the new node or NULL if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	while (i < index - 1)
	{
		if (!prev || !(prev->next))
			return (-1);
		prev = prev->next;
		i++;
	}


	current = prev->next;
	prev->next = current->next;
	free(current);

	return (1);
}
