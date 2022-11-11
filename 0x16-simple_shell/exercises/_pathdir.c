#include "exercises.h"
/**
* main - function that prints each directory contained in the the environment variable PATH, one directory per line.
*/
int main()
{
	extern char **environ;
	char *name = "PATH";
	int result;
	char *check;
	int i;
	char *dir;
	i = 0;
	while(environ[i] != NULL)
	{
		check = strtok(environ[i], "=");
		result = strcmp(name, check);
		if (result  == 0)
		{
			check = strtok(NULL, "\0");
			//printf("Print PATH: %s\n", check);
			dir = check;
			//printf("Print dir: %s\n", dir);
		}
		i++;
	}
	//printf("Print dir: %s\n", dir);
	check = strtok(dir, ":");
	while(check != NULL)
	{
		//printf("Print check: %s\n", check);
		printf("%s\n", check);
		check = strtok(NULL, ":");
	}
	return (0);
}
