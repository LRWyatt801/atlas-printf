#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints a string with formatting
 * format - string to be printed
 *
 * Return: 0 on success
 */

int _printf(const char *format)
{
	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%') /* checks '%specifier' */
		{
			format++;
			if (*format == '%') /* checks '%%' */
				write(1, format, 1);
			else
			{
				get_spec(*format);
		}
		else
			write(1, format, 1);
		format++;
	}
	return (0);
}
