#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * op_char - print char
 * @al: argument list
 * Return: printf
 */
void op_char(va_list al)
{
	printf("%c", va_arg(al, int));
}
/**
 * op_int - print int
 * @al: argument list
 * Return: printf
 */
void op_int(va_list al)
{
	printf("%i", va_arg(al, int));
}
/**
 * op_float - print float
 * @al: argument list
 * Return: printf
 */
void op_float(va_list al)
{
	printf("%f", va_arg(al, double));
}
/**
 * op_string - print string
 * @al: argument list
 * Return: printf
 */
void op_string(va_list al)
{
	char *s = va_arg(al, char*);

	if (s == 0)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
* print_all - function that prints anything.
* @format: input
* Return: output
*/
void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_string}
	};
	va_list al;
	int x;
	int y;
	char *separator = "";

	va_start(al, format);
	x = 0;
	while (format && format[x])
	{
		y = 0;
		while (y < 4)
		{
			if (ops[y].op[0] == format[x])
			{
				printf("%s", separator);
				ops[y].func(al);
				separator = ", ";
			}
			y++;
		}
		x++;
	}
	va_end(al);
	printf("\n");
}
