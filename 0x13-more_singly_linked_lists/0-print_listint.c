#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: input
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *element = h;
	int node = 0;

	while (element != NULL)
	{
		printf("%d\n", element->n);
		element = element->next;
		node++;
	}
	return (node);
}
