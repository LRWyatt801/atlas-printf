#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * int2str - converts int to string
 * @num: int to convert
 *
 * Return: string array
 */

char *int2str(int num)
{
	int i = 0, start = 0, end, digit;
	char *str;
	char tempstr;

	str = malloc(sizeof(char) * 15);

	if (num < 0)
	{
		if (num == INT_MIN) /* special case for INT_MIN */
			num = INT_MAX + 1;
		else
			num = -num;
		str[i] = '-';
		i++;
	}
	if (num == 0)
		str[i] = '0';
	else
		while (num != 0)
		{
			digit = num % 10;
			str[i] = digit + '0';
			i++;
			num = num / 10;
		}
	if (str[0] == '-')
		start = 1;

	end = i - 1;
	while (start < end)
	{
		tempstr = str[start];
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

	return (write(1, &a, 1));

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

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
		lenr++;
	}
	return (lenr);

	}
}
