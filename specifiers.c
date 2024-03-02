#include <stdarg.h>
#include

/**
 * getspec - gets a function pointer and type of specifier
 * @s: specifier character
 * @args: list of variables
 *
 * Return: identifier struct or NULL if none match
 */

int (getspec(char *s))(va_list args)
{

	spec identifiers[] = {
		{"d", printdigit, int},
		{"c", printchar, char},
		{"s", printstr, *char},
		{"i", printint, int},
		{NULL, NULL, NULL}
	}
int i;
i = 0;
while (identifiers[i]. != NULL)
{
	if (identifiers[i].s == *s)
	{
		return (identifiers[i]);
	}
	else
		return (NULL);
