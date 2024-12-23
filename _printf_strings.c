#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf_string - Prints a string of chars
 * @args: represents a list of arguments (args is of type va_list)
 * Return: number of characters printed (index)
 */

int _printf_string(va_list args)
{
	int index = 0;
	char *string = va_arg(args, char *);

	if (string == NULL)
		string = "(null)";

	while (string[index])
	{
		_putchar(string[index++]);
	}
	return (index);
}
