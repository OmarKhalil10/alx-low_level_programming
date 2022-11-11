#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - program that executes the command ls -l /tmp in
 * 5 different child processes. Each child should be created by the same process
 * (the father). Wait for a child to exit before creating a new child.
 * Return: output
 */
int main(void)
{
	pid_t child_pid;
	int status;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
	int i = 0;

	while (i < 5)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			printf("I'm child, my PID is: %d, I'm son of: %d\n", getpid(), getppid());
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
			printf("Command executed by child: %d\n", getpid());
		}
		else
		{
			wait(&status);
			printf("I'm father, my PID is: %d\n", getpid());
		}
		i++;
	}
	return (0);
}
