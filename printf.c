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
	int (*f)(va_list);
	va_list args;
	int lenc = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%') /* checks '%specifier' */
		{
			format++;
			if (*format == '%') /* checks if not % */
			{
				write(1, "%", 1);
				lenc++;
				format++;
			}
			else if (*format != '\0')
			{
				f = getspec(format);
				if (f == NULL)
				{
					write(1, "%", 1);
					write(1, format, 1);
					lenc += 2;
				}
				else
				{
					lenc = lenc + f(args);
				}
			format++;
			}
			else
			{
				return (-1);
			}
		}
		else
		{
		write(1, format, 1);
		lenc++;
		format++;
		}

	}
	va_end(args);
	return (lenc);
}
