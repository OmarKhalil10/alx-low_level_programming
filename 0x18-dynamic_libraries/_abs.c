#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @n: The integer input
 * Return: absolute value
 */
int _abs(int n)
{
	int x;

	x = n;
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
	return (0);
}
