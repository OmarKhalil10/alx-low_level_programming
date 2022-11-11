#include <stdio.h>
/**
 * main - function that prints all the arguments, without using ac.
 * @ac: is the number of items in av
 * @av: is a NULL terminated array of strings
 * av[0] usually contains the name used to invoke the current program.
 * av[1] is the first argument of the program, av[2] the second, and so on.
 * Return: print all the arguments
 */
int main(int ac, char **av)
{
	int i;

	for (i = 1; av[i] != NULL; i++)
	{
		printf("Print each argument without using ac: %s\n", av[i]);
	}
	return (0);
}
