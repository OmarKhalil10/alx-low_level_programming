#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: input
 * @n: input
 * Return: output
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list al;
	unsigned int i;
	int value;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(al, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(al, unsigned int);
		if (i < n - 1)
		{
			printf("%d%s", value, separator);
		}
		if (i == n - 1)
		{
			printf("%d", value);
		}
	}
	printf("\n");
	va_end(al);
}
