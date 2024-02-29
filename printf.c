#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - prints a string with formatting
 * format - string to be printed
 *
 * Return: 0 on success
 */

int _printf(const char *format)
{
	while (*format != '\0')
	{

		if (*format == '%')
		{
			format++;
			if (*format == '%')
				write(1, format, 1);
			else
				get_spec(*format);	
		}
		else

		write(1, format, 1);
		format++;
	}
	return (0);
}
