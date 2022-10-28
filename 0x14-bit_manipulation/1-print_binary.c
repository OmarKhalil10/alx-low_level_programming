#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: input
 * Return: output
 */
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar('0' + n);
	}
	else
	{
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}
