#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: The character input
 * Return:
 * Returns 1 if c is lowercase.
 * Returns 0 otherwise.
 */
int _islower(int c)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase == c)
		{
			return (1);
		}
	}
	return (0);
}
