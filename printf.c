#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints a string with formatting
 * format - string to be printed
 *
 * Return: 0 on success
 */

int _printf(const char *format, ...)
{
	void (*f)(va_list);
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%') /* checks '%specifier' */
		{
			format++;
			if (*format != '%') /* checks if not % */
			{
				f = getspec(format);
				f(args);
			}
			else
				write(1, format, 1);
		}
		else
			write(1, format, 1);
		format++;
	}
	return (0);
}
