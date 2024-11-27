#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
* stdlib - malloc free
* stdarg - variadic function
* unistd - write
* limits - set limits of data types
*/

typedef struct format_specifier
{
	char specifier;
	int (*func)(va_list);
}

format_specifier_t;

/**
 *struct format_specifier - A structure to
 *map format specifiers to their
 *handler functions
 *
 *@specifier: A character representing the
 *format specifier
 *
 *@func: A function pointer that points
 *to the corresponding handler function
 *that processes the respective
 *specifier
 */


int _printf(const char *format, ...);
int _putchar(char c);
int _printf_string(va_list args);
int _printf_chars(va_list args);
int _printf_percents(va_list args);

#endif
