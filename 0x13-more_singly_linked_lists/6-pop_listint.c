#include "lists.h"
/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 * @head: input
 * Return: output
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n_tmp;

	if (*head != NULL)
	{
		tmp = (*head)->next;
		n_tmp = (*head)->n;
		free(*head);
		*head = tmp;
		return (n_tmp);
	}
	return (0);
}
