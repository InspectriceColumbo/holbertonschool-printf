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
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _printf_string(va_list args);
int _printf_chars(va_list args);
int _printf_percents(va_list args);
int _print_decimals(va_list ap);

#endif
