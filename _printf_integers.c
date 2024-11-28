#include "main.h"
#include <stdarg.h>
#include <limits.h>

/**
 * _printf_integers - Function that prints integers
 * @ap: list of args containing integers (arg of type va_list)
 * Return: len, i.e the number of printed integers
 */

int _printf_integers(va_list ap)
{
	int n = va_arg(ap, int);
	unsigned int num;
	int len = 0;
	int div = 1; /*Calculates the number of digits in the number*/

	if (n == INT_MIN) /*INT_MIN is one more than INT_MAX*/
	{
		len += _putchar('-');
		num = (unsigned int)(INT_MAX) + 1;
	}
	else if (n < 0) /*Converts negative to positive*/
	{
		len += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num == 0) /*If the number is zero, handle it as is*/
	{
		len += _putchar('0');
		return (len);
	}

	while (num / div > 9)
	{
		div *= 10;
	}

	while (div != 0) /*Outputs each digit*/
	{
		len += _putchar((num / div) + '0');
		num %= div;
		div /= 10;
	}
	return (len);
}
