#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: is the character input
 * Return: 1 if c is a digit, return 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
