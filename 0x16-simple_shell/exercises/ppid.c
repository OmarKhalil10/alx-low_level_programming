#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
/**
 * main - PPID, program that prints the PID of the parent process.
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_ppid;

	my_ppid = getppid();
	printf("PID of the parent process: %u\n", my_ppid);
	return (0);
}
