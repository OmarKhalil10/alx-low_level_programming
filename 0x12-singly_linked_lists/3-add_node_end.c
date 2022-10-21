#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: call struct
 * @str: argument
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;
	list_t *tmp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (tmp);
}
