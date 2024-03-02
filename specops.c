#include
#include
#include

/**
 *
 *
 *
 *
 *
 */


char int2str(int num)
{
	int i = 0
	char str = malloc(sizeof(char) * 12)
		
		if (int < '0')
		{
			str[i++] = '-';
			num = -num;
		}
	if (num = 0)
	{
		str[i++] = '0'
	}

	else
	{
		while (num != 0)
		{
			int digit = num % 10;
			str[i++] = digit + '0';
			num = num / 10
		}

		str[i] = '\0';

		if (str[0] != '-')
		{
			int start;
			i--

			for (start = 0; start < i; start++)
			{
				char tempstr = str[start];
				str[start] = str[i]
					str[i] = temp
					
void  printdigit(int num)
{
	char str = int2str(num)
		wrie(1, str, strlen(str));
	free(str);
}
