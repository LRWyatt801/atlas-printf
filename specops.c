#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * int2str - converts int to string
 * @args: variable to print
 *
 * Return - string array
 */

char *int2str(int num)
{
	int i = 0;
	int digit;
	char *str;
	       
	str = malloc(sizeof(char) * 12);

	if (num < 0)
	{
		str[i] = '-';
		i++;
		num = -num;
	}
	if (num == 0)
	{
		str[i] = '0';
	}
	else
	{
		while (num != 0)
		{
			digit = num % 10;
			str[i] = digit + '0';
			i++;
			num = num / 10;
		}
		str[i] = '\0';
		if (str[0] != '-')
		{
			int start;
			int end = i - 1;

			for (start = 0; start < end; start++)
			{
				char tempstr = str[start];
				str[start] = str[end];
				str[end] = tempstr;
				end--;
			}
		}
	}
	return (str);
}

/**
 * printdigit - prints digit
 * @args: variable to use
 *
 * Return: n/a
 */

void printdigit(va_list args)
{
	int num = va_arg(args, int);
	char *str;

	str = int2str(num);

	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/**
 * printchar - prints single char
 * @args: variable to print
 *
 * Return: n/a
 */

void printchar(va_list args)
{
	char a = va_arg(args, int);

	write(1, &a, 1);
}

/**
 * printstr - prints given string
 * @args: variable to use
 *
 * Return: n/a
 */

void printstr(va_list args)
{
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
