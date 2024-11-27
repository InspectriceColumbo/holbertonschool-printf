#include "main.h"
#include <stdarg.h>

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
		string = "null";

	while (*string != 0)
	{
		_putchar(*string);
		string++;
		index++;
	}
	return (index);
}
