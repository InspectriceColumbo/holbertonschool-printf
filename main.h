#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

typedef struct format_specifier
{
	char specifier;
	int (*func)(va_list);
}

format_specifier_t;

format_specifier_t specifiers[] = {
	{'c', _printf_chars},
	{'s', _printf_string},
	{'%', _printf_percents},
}

/**
* stdlib - malloc free
* stdarg - variadic function
* unistd - write
* limits - set limits of data types
*/

int _printf(const char *format, ...);
int _putchar(char c);
int _printf_string(va_list args);
int _printf_chars(va_list args);
int _printf_percents(va_list args);

#endif
