#include "main.h"
/**
 * _isupper - Function that checks for uppercase character.
 * @c: is the character input
 * Return: 1 if c is uppercase, return 0 otherwise
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
