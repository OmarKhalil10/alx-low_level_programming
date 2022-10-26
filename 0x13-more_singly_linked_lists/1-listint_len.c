#include "lists.h"
/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list.
 * @h: input
 * Return: output
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *element = h;
	int node = 0;

	while (element != NULL)
	{
		element = element->next;
		node++;
	}
	return (node);
}
