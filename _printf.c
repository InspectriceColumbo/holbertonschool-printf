#include "main.h"

int _putchar(char c)
{
    return write(1, &c, 1);  
}

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
                _putchar(c);
                count++;
            } 
            else if (*ptr == 's')
	      {
                char *str = va_arg(args, char *);
                for (int i = 0; str[i] != '\0'; i++)
		  {
                    _putchar(str[i]);
                    count++;
                }
            }
            else if (*ptr == '%')
	    {
	      _putchar('%');
                count++;
            } 
            else
	    {
                 _putchar('%');
                _putchar(*ptr);
                count += 2;
            }
        } 
        else
	{
            _putchar(*ptr);
            count++;
        }
    }

    va_end(args);
    return count;
}
