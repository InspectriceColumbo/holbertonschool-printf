#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h> 
#include <limits.h>

/**stdlib : malloc free
*stdarg : variadic function
*unistd : write
*limits : set limits of data types
*/

/**
 * function prototypes
 */

int _printf(const char *format, ...);
int _putchar(char c);

#endif
