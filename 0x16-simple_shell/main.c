#include "main.h"
/**
 * main - first version of a super simple shell that can
 * run commands with their full path, without any argument.
 *
 * Return: Always 0.
 */
int main()
{
	size_t len = NULL;
	char *line = NULL;
	char **exe = NULL;
	int ret = NULL;
	const char split[3] = " \n\t";
	char *run = NULL;
	int i = NULL;
	pid_t process = NULL;
	int status = NULL;

	while (1)
	{
		line = malloc(sizeof(char) * len);
		if (line == NULL)
		{
			free(line);
			return (1);
		}
		exe = malloc(sizeof(char) * len);
		if (line == NULL)
		{
			free(exe);
			return (1);
		}
		printf("($) ");
		ret = getline(&line, &len, stdin);
		if (ret == 1)
		{
			free(line);
			free(exe);
			continue;
		}
		run = strtok(line, split);
		i = 0;
		while(run != NULL)
		{
			exe[i] = run;
			run = strtok(NULL, split);
			i++;
		}
		exe[i] = 0;
		process = fork();
		if (process < 0)
		{
			perror("Error: PROCESS !!!\n");
			return (1);
		}
		if (process == 0)
		{
			if (execve(exe[0], exe, NULL) == -1)
			{
				perror("Error: EXECUTABLE !!!\n");
			}
		}
		if (process > 0)
		{
			wait(&status);
		}
		free(line);
		free(exe);
	}
	return (0);
}
