#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: string containing the format specifiers and text
 * @...: variable number of args that correspond to the format specifiers
 * Return: (count)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	const char *ptr;
	va_list args;

	va_start(args, format);
	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%' && *(ptr + 1) != '\0')
		{
			ptr++;
			if (*ptr == 'c')
			{
				char c = va_arg(args, int);

				count += _putchar(c);
			} else if (*ptr == 's')
			{
				char *str = va_arg(args, char *);
				int i = 0;

				while (str[i] != '\0')
				{
					count += _putchar(str[i]);
					i++;
				}
			} else if (*ptr == '%')
			{
				count += _putchar('%');
			} else
			{
				_putchar('%');
				_putchar(*ptr);
				count += 2;
			}
		} else
		{
			count += _putchar(*ptr);
		}
	} va_end(args);
	return (count);
}
