#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _putchar - print given character
 * @c: character to print
 * Return: Write
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
