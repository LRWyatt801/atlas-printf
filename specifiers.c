#include
#include

/**
 *
 *
 *
 *
 *
 */

int (getspec(char *s))(args)
{

	spec identifiers[] = {
		{"d", printdigit, int},
		{"c", printchar, char},
		{"s", printstr, *char},
		{}
		{NULL, NULL, NULL}
	}
int i;
i = 0;
while (identifiers[i]. != NULL)
{
	if (identifiers[i].s == *s)
	{
	identifiers[i].f(args);
			
			}
