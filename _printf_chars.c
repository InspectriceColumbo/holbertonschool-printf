#include "main.h"
#include <stdarg.h>

/**
 * _printf_chars - Prints a character
 * @args: argument of type va_list (list of args passed to the function)
 * Return: 1 (number of char printed)
 */

int _printf_chars(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
