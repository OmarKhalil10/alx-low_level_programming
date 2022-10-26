#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head: input
 * @index: input
 * Return: output
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < index)
		{
			if (head == 0)
			{
				return (head);
			}
			else
			{
				head = head->next;
				i++;
			}
		}
		return (head);
	}
}
