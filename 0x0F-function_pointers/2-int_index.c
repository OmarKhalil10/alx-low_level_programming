#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: input
 * @size: input
 * @cmp: input
 * Return: output
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
