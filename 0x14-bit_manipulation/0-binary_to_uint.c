#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or
 * more chars in the string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int binary;
	int i;
	int j;


	if (b == 0)
	{
		return (0);
	}
	i = 0;
	while (b[i] != 0)
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
		i++;
	}
	i = i - 1;
	for (j = 0; i >= 0; j++, i--)
	{
		if (b[i] == 48)
		{
			binary = 0;
		}
		else if (b[i] == 49)
		{
			binary = 1;
		}
		binary = binary << j;
		convert = convert | binary;
	}
	return (convert);
}
