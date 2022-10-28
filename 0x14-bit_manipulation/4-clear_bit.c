#include "holberton.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: input
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	long int set = 1;

	if (index < 64)
	{
		set = ~(1 << index);
		*n = *n & set;
		return (1);
	}
	else
	{
		return (-1);
	}

}
