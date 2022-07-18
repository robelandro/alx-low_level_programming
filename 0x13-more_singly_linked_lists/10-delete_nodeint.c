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
	listint_t *temp;
	listint_t *prev;
	unsigned int i;
	
	temp = *head;
	i = 0;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (i == index - 1)
		{
			prev = temp;
			temp = temp->next;
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (0);
}
