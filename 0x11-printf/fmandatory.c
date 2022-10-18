#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 * op_c - print a single character
 * @al: argument list
 * Return: Always lenght
 */
int op_c(va_list al)
{
	char item[1];
	char auxitem;
	int Length = 1;

	auxitem = va_arg(al, int);
	item[0] = auxitem;
	_putchar(item[0]);
	return (Length);
}
/**
 * op_s - print a string of characters
 * @al: argument list
 * Return: Always lenght
 */
int op_s(va_list al)
{
	char *item = va_arg(al, char *);
	int length = 0;

	while (item[length] != 0)
	{
		_putchar(item[length]);
		length++;
	}
	return (length);
}
/**
 * op_percent - print a percent sign (\% also works)
 * @al: argument list
 * Return: Always lenght
 */
int op_percent(va_list al)
{
	int *item = va_arg(al, char *);
	int length = 1;

	_putchar('%');

	return (length);
}
/**
 * op_d - print a decimal (base 10) number
 * @al: argument list
 * Return: Always lenght
 */
int op_d(va_list al)
{
	int item;
	int unit = 1;
	int base = 10;
	int length = 0;
	unsigned int number;

	item = va_arg(al, int);
	if (item < 0)
	{
		_putchar('-');
		number = item * -unit;
		length++;
	}
	else
	{
		number = item;
	}
	while (number / unit >= base)
	{
		unit *= base;
	}
	while (unit != 0)
	{
		_putchar('0' + number / unit);
		number %= unit;
		unit /= base;
		length++;
	}
	return (length);
}
/**
 * op_i - print an integer in base 10
 * @al: argument list
 * Return: Always lenght
 */
int op_i(va_list al)
{
	int item;
	int base = 10;
	int length = 0;

	item = va_arg(al, int);

	if (item < base)
	{
		_putchar(item);
		length++;
	}
	return (length);
}
/**
 * op_u - print an unsigned decimal (base 10) number
 * @al: argument list
 * Return: Always lenght
 */
int op_u(va_list al)
{
	return (0);
}
/**
 * op_o - print a number in octal (base 8)
 * @al: argument list
 * Return: Always lenght
 */
int op_o(va_list al)
{
	return (0);
}
/**
 * op_x - Unsigned hexadecima lowercase
 * @al: argument list
 * Return: Always lenght
 */
int op_x(va_list al)
{
	return (0);
}
/**
 * op_X - Unsigned hexadecima uppercase
 * @al: argument list
 * Return: Always lenght
 */
int op_X(va_list al)
{
	return (0);
}
/**
 * op_p - Address
 * @al: argument list
 * Return: Always lenght
 */
int op_p(va_list al)
{
	return (0);
}
/**
 * op_r - Unknown
 * @al: argument list
 * Return: Always lenght
 */
int op_r(va_list al)
{
	return (0);
}
