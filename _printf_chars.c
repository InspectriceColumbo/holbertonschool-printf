#include "main.h"

/**
 * _printf_chars - Prints a character
 * @args: argument of type va_list (list of args passed to the function)
 * Return: 1
 */

int _printf_chars(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
