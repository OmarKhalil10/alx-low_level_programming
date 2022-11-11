#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints "$ ", wait for the user to enter a command,
 * prints it on the next line.
 * Return: 0 for EXIT_SUCCESS, or 1 for EXIT_FAILURE
 */
int main(void)
{
	char *line;
	size_t len = 0;

	line = malloc(sizeof(char) * len);
	if (line == NULL)
	{
		free(line);
		return (1);
	}

	printf("#cisfun$ ");
	getline(&line, &len, stdin);
	printf("%s", line);
	free(line);
	return (0);
}
