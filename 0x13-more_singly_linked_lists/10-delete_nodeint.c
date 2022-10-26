#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list.
 * @head: input
 * @index: input
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = NULL;
	listint_t *del = NULL;
	listint_t *tmp = NULL;
	listint_t *current = NULL;

	if (head != NULL && (*head) != NULL)
	{
		i = 1;
		current = *head;
		while (i < index)
		{
			tmp = current->next;
			if (tmp != NULL)
			{
				current = tmp;
			}
			else
			{
				return (-1);
			}
			i++;
		}
		if (index == 0)
		{
			del = current;
			*head = current->next;
		}
		else
		{
			del = current->next;
		}
		current->next = del->next;
		free(del);
		return (1);
	}
	return (-1);
}
