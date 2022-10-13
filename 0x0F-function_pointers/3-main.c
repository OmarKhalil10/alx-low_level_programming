#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - program that performs simple operations.
 * @argc: input
 * @argv: input
 * Return: output
 */
int main(int argc, char **argv)
{
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
