#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: string containing the format specifiers and text
 * @...: variable number of args that correspond to the format specifiers
 * Return: (count)
 */

int _printf(const char *format, ...)
{
    format_specifier_t specifiers[] = {
        {'c', _printf_chars}, {'s', _printf_string},
        {'d', _printf_decimals}, {'i', _printf_integers},
        {'%', _printf_percents}, {'\0', NULL},
    };
    va_list args;
    int i = 0, j, counter = 0;

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    va_start(args, format);
    while (format[i])
    {
        if (format[i] != '%')
            counter += _putchar(format[i]);
        else
        {
            for (j = 0; specifiers[j].specifier != '\0'; j++)
                if (format[i + 1] == specifiers[j].specifier)
                {
                    counter += specifiers[j].func(args);
                    i++;
                    break;
                }
            if (!specifiers[j].specifier)
            {
                counter += _putchar(format[i]);
                counter += _putchar(format[i + 1]);
                i++;
            }
        }
        i++;
    }
    va_end(args);
    return (counter);
}
