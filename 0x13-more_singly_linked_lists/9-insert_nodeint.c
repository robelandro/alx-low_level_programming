#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: head of the list
 * @idx: index of the list where the new node will be inserted
 * @n: value of the new node
 *
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	unsigned int i;
	
	temp = *head;
	i = 0;
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = temp;
		*head = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
