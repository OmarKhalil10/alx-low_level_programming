#include "lists.h"
/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: input
 * Return: output
 */
int sum_listint(listint_t *head)
{
	while (head != NULL)
	{
		return (head->n + sum_listint(head->next));
	}
	return (0);
}
