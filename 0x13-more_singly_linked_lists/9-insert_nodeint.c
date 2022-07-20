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
	listint_t *new_node, *tmp;
	unsigned int i;

	if (idx == 0)
		return (add_nodeint_end(head, n));
	tmp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
