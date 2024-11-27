#include <unistd.h>
#include "main.h"

/**
 * _putchar - outputs one character to standard output, using write
 * @c: the character to be printed
 * Return: 1 (number of char written) or -1 if error (see error code w/ errno)
 */
int _putchar(char c)
{
  return write(1, &c, 1);
}
