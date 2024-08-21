#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - Custom printf function.
 * @format: Format string.
 * Return: Num null byte used to end output to strings).
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
va_start(args, format);
	while (*format)
	{
            if (*format == '%' && *(format + 1) != '\0')
            {
                    format++;
                    if (*format == 'c')
                    {
                        int chararg = va_arg(args, int);
                        count++;
                        _putchar(chararg);
                    }
                    else if (*format == 's')
                    {
                        char *str = va_arg(args, char *);
                        count += _printstr(str);
                    }
                    else if (*format == 'd' || *format == 'i')
                    {
                        int intarg = va_arg(args, int);
                        count+= _printint(intarg);
                    }
                    else if (*format == '%')
                    {
                        count++; 
                        _putchar('%');
                    }
                    else if(*format == 'b'){
                        
                        int convert = va_arg(args, int);
                        int temp_count =decimalToBinary(convert);
                        count+=temp_count;
                    }
                    else if(*format == 'u'){
                        
                        int unsig_ed = va_arg(args, int);
                        count+= _printint_mi(unsig_ed);
                    }

                    else if(*format == 'x' || *format == 'X'){
                        
                        int unsig_ed = va_arg(args, int);
                        count+= print_hex(unsig_ed);
                    }


                    else if(*format == 'o'){
                        
                        int oct = va_arg(args, unsigned int);
                        count+= print_oct(oct);
                    }


                    else
                    {
                    count++;
                    _putchar('%');
                    count++;
                    _putchar(*format);
                    }
            }

            else if(*format == '\n')
            {
                count++;
                _putchar(*format);
            }

            else
            {
                count++;
                _putchar(*format);
            }
            format++;
	}
va_end(args);
return (count);
}