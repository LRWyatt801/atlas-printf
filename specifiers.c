#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * getspec - gets a function pointer and type of specifier
 * @s: specifier character
 * @args: list of variables
 *
 * Return: identifier struct or NULL if none match
 */

int (*getspec(const char *s))(va_list)
{
	spec identifiers[] = {
		{"d", printdigit},
		{"c", printchar},
		{"s", printstr},
		{"i", printdigit},
		{NULL, NULL}
	};
	int i;
	i = 0;
	while (identifiers[i].s != NULL)
	{
		if (*(identifiers[i].s) == *s)
			return (identifiers[i].f);
		i++;
	}
	return (NULL);
}
