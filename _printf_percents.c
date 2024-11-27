#include "main.h"

/**
 * _printf_percents - Prints a percentage character
 * @args: argument of type va_list (list of args passed to the function)
 * Return: 1 (number of char printed)
 */

int _printf_percents(va_list args)
{
	(void)args;
	_putchar("%");
        return (1);
}
