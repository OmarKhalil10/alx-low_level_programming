#include <stdio.h>
/**
* main - program that prints the environment using the global variable environ.
*/
extern char **environ;
int main()
{
	int i;

	i = 0;
	while(environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return 0;
}
