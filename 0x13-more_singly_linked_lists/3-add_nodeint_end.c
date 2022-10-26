#include "lists.h"
/**
 * *add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: input
 * @n: input
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
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
}
