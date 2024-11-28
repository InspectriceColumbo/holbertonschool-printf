#ifndef MAIN_H
#define MAIN_H

/**
 * stdlib - malloc, free
 * stdarg - variadic functions
 * unistd - write
 * limits - set limits of data types
 * stddef - size_t, NULL
 * stdio - main functions
 */
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * @struct format_specifier: A structure to map format specifiers to their..
 * .. handler functions
 * @specifier: A character representing the format specifier
 * @func: A function pointer pointing to the corresponding handler function..
 * ..that processes the respective specifier.
 */

typedef struct format_specifier
{
	char specifier;
	int (*func)(va_list);
}

format_specifier_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _printf_string(va_list args);
int _printf_chars(va_list args);
int _printf_percents(va_list args);

#endif
