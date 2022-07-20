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
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int i;

	if (!head || !*head || index == 0)
	{
		free(temp);
		*head = NULL;
		return (1);
	}
	for (i = 0; temp && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	if (temp->next == NULL)
	{
		prev->next = NULL;
		free(temp);
		return (1);
	}
	prev->next = temp->next;
	free(temp);
	return (1);
}
