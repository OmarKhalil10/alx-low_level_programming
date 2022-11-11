#include <stdio.h>
#include <dirent.h>
#include <string.h>
/**
 * main - program that looks for files in the current PATH.
 *
 * Return: Always 0.
 */
int main ()
{
	struct dirent *filename;
	DIR *dir;
	char s[16];
	int result;

	scanf("%s", s);
	if((dir = opendir(".")) == NULL)
	{
		perror("opendir() error");
	}
	else
	{
		while((filename = readdir(dir)) != NULL)
		{
			result = strcmp(s, filename->d_name);
			if (result == 0) 
			{
				printf("Success! The current PATH if it contains: %s\n", filename->d_name);
			}
		}
	}
	closedir(dir);
	return (0);
}
