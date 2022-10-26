#include "lists.h"
/**
 * insert_nodeint_at_index - function that
 * inserts a new node at a given position.
 * @head: input
 * @idx: input
 * @n: input
 * Return: output
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	i = 0;
	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	free(new);
	return (NULL);
}
