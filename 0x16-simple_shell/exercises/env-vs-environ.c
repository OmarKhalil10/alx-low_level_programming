#include <stdio.h>
/**
* main - program that prints the address of env
* (the third parameter of the main function) and environ (the global variable).
*/
extern char **environ;
int main(int ac, char **av, char **env)
{
	printf("The address of double pointer env is:      %p\n", &env);
	printf("The address of double pointer environ is:  %p\n", &environ);
	printf("The address of the value using env is:     %p\n", *env);
	printf("The address of the value using environ is: %p\n", *environ);
	return (0);
}
