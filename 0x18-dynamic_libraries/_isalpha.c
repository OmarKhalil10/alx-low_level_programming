#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character input
 * Return: 1 if c is a letter, lowercase or uppercase
 * Return 0 otherwise.
 */
int _isalpha(int c)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		{
			if (lowercase == c || uppercase == c)
			{
				return (1);
			}
		}
	}
	return (0);
}
