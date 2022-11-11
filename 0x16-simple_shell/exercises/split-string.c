#include <stdio.h>
#include <string.h>
/**
 * main - function that splits a string and
 * returns an array of each word of the string.
 * Return: output
 */
int main(void)
{
	char string[80] = "This is a string for test this function. Welcome!!!";
	const char split[1] = " ";
	char *word;

	word = strtok(string, split);
	while (word != NULL)
	{
		printf(" %s\n", word);
		word = strtok(NULL, split);
	}
	return (0);
}
