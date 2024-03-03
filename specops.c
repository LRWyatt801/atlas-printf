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
	int start = 0;
	int end;

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
		/*str[i] = '\0';*/
	}

	if (str[0] == '-')
		start = 1;

	end = i - 1;

	while (start < end)
	{
		char tempstr = str[start];
		str[start] = str[end];
		str[end] = tempstr;
		end--;
		start++;
	}
	return (str);
}

/**
 * printdigit - prints digit
 * @args: variable to use
 *
 * Return: n/a
 */

int printdigit(va_list args)
{
	int num = va_arg(args, int);
	int lenr = 0;
	char *str;

	str = int2str(num);

	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
		lenr++;
	}
	return (lenr);
}

/**
 * printchar - prints single char
 * @args: variable to print
 *
 * Return: n/a
 */

int printchar(va_list args)
{
	const char a = va_arg(args, int);
	write(1, &a, 1);
	return (1);
}

/**
 * printstr - prints given string
 * @args: variable to use
 *
 * Return: n/a
 */

int printstr(va_list args)
{
	char *str = va_arg(args, char *);
	int lenr = 0;

	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
		lenr++;
	}
	return (lenr);
}
