#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @array: input
 * @size: input
 * @action: input
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		unsigned int i = 0;

		while (i < size)
		{
			(action)(array[i]);
			i++;
		}
	}
}
