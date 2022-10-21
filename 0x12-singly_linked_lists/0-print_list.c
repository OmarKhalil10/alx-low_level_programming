#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 *@h: input
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *element = h;
	int node = 0;

	while (element != NULL)
	{
		if (element->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", element->len, element->str);
		}
		element = element->next;
		node++;
	}
	return (node);
}
