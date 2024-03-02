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
	spec *functype;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%') /* checks '%specifier' */
		{
			format++;
			if (*format == '%') /* checks '%%' */
				write(1, format, 1);
			else
			{
				functype = get_spec(*format);
				functype.f(va_arg(args, functype.type));
		}
		else
			write(1, format, 1);
		format++;
	}
	return (0);
}
