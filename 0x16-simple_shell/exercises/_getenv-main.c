#include "exercises.h"
/**
* main - for test function _getenv, function that gets an environment variable. (without using getenv)
*/
int main()
{
	printf("PATH (without using getenv): %s\n", _getenv("PATH"));
	printf("HOME (without using getenv): %s\n", _getenv("HOME"));
	printf("ROOT (without using getenv): %s\n", _getenv("ROOT"));
	//printf("PATH : %s\n", getenv("PATH"));
	//printf("HOME : %s\n", getenv("HOME"));
	//printf("ROOT : %s\n", getenv("ROOT"));
	return (0);
}
