#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: input
 * @n: input
 * Return: output
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list al;
	unsigned int i;
	char *value;

	va_start(al, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(al, char*);
		if (value == 0)
		{
			printf("(nil)");
		}
		if (i == n - 1)
		{
			printf("%s", value);
		}
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s%s", value, separator);
			}
			else
			{
				printf("%s", value);
			}
		}
	}
	va_end(al);
	printf("\n");
}
