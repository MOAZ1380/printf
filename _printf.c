#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - Custom printf function.
 * @format: Format string.
 *
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
		count += putchar(chararg);
	}
	else if (*format == 's')
	{
		char *str = va_arg(args, char *);
	while (*str)
		{
		count += putchar(*str);
			str++;
		}
	}
	else if (*format == '%')
	{
		count += putchar('%');
		}
	else
	{
	count += putchar('%');
	count += putchar(*format);
	}
	}
	else
	{
		count += putchar(*format);
	}
	format++;
	}
va_end(args);
return (count);
}
