#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: call struct
 * @str: argument
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != 0)
		{
			i++;
		}
		new->len = i;
		new->str = strdup(str);
		new->next = *head;
		*head = new;
	}
	return (*head);
}
