#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: input
 * @src: input
 * @n: input
 * Return: output
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
