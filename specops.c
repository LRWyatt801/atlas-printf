#include <unistd.h>
#include <stdarg.h>
#include <main.h>

/**
 * int2str - converts int to string
 * @args: variable to print
 *
 * Return - string array
 */

char int2str(va_list num)
{
	int i = 0;
	char str = malloc(sizeof(char) * 12);

	if (int < '0')
	{
		str[i++] = '-';
		num = -num;
	}
	if (num = 0)
	{
		str[i++] = '0';
	}
	else
	{
		while (num != 0)
		{
			int digit = num % 10;
			str[i++] = digit + '0';
			num = num / 10;
		}

		str[i] = '\0';

		if (str[0] != '-')
		{
			int start;
			i--;

			for (start = 0; start < i; start++)
			{
				char tempstr = str[start];
				str[start] = str[i];
				str[i] = temp;
				i--;
			}
		}
	}
}

/**
 * printdigit - prints digit
 * @args: variable to use
 *
 * Return: n/a
 */

void printdigit(va_list num))
{
	char str = int2str(num);
	while (str != '\0')
		write(1, str, 1);
	free(str);
}

/**
 * printchar - prints single char
 * @args: variable to print
 *
 * Return: n/a
 */

void printchar(va_list a)
{
	write(1, a, 1);
}

/**
 * printstr - prints given string
 * @args: variable to use
 *
 * Return: n/a
 */

void printstr(va_list bstr)
{
	int i = 0;
	while (bstr[i] != '\0')
	{
		write(1,bstr[i],1);
		i++;
	}
}
