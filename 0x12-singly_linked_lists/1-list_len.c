#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t.
 *@h: input
 * Return: returns the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	const list_t *element = h;
	int node = 0;

	while (element != NULL)
	{
		if (element->str == NULL)
		{}
		else
		{}
		element = element->next;
		node++;
	}
	return (node);
}
