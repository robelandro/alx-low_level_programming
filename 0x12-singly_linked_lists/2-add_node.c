#include "lists.h"

/**
  *_strlen - finds length of a string.
  *@str: string.
  *
  *Return: lengt of string.
  */
int _strlen(const char *str)
{
	int i;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
  *add_node - adds a new node at the beginning of a list_t.
  *@head: pointer to first element of the list.
  *@str: string to be duplicated.
  *
  *Return: address of the new element or NULL if it failed.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *place_holder;

	place_holder = malloc(sizeof(list_t));
	if (place_holder == NULL)
		return (NULL);
	place_holder->str = strdup(str);
	place_holder->len = _strlen(str);
	place_holder->next = *head;
	*head = place_holder;
	return (place_holder);
}
