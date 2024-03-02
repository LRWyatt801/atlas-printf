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
				i--;
			}
		}
	}

/**
 *
 *
 *
 *
 *
 *
 */

void  printdigit(int num)
{
	char str = int2str(num)
		wrie(1, str, strlen(str));
	free(str);
}


void printchar(char a)
{
	write(1,a,1)
}

void printstr(char *bstr)
{
	int i = 0
	while (bstr[i] != '\0')
	{
		write(1,bstr[i],1);
		i++
	}
	
	putchar('\0'); 
	or
	Write(1,bstr[i],1 or NULL);
}



