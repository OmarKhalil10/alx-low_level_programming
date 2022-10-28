#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: input
 * @m: input
 * Return: output
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r;
	int count = 0;

	r = n ^ m;

	while (r != 0)
	{
		count += r & 1;
		r = r >> 1;
	}
	return (count);
}
