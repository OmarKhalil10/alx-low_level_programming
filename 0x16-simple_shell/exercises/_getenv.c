#include "exercises.h"
/**
* _getenv - function that gets an environment variable. (without using getenv)
*/
extern char **environ;
//int main()
char *_getenv(const char *name)
{
	char *check;
	int i;
	//char *name = "USER=vagrant";
	int result;
	i = 0;
	while(environ[i] != NULL)
	{
		check = strtok(environ[i], "=");
		//result = strcmp(name, environ[i]);
		result = strcmp(name, check);
		if (result  == 0)
		{
			//printf("%s\n", environ[i]);
			check = strtok(NULL, "\0");
			return (check);
		}
		i++;
	}
	return (NULL);
}
