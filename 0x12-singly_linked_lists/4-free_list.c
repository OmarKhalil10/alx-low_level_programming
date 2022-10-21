#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: argument
 * Return: output
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
