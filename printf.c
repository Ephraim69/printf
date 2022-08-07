#include "main.h"

#define P
char *format_int(int n, char b[]);
char *format_uns_int(unsigned int n, char b[]);
void _putchar(char c);
#ifdef M
int main(void)
{
	print_num(-762534);
}
#endif

#ifdef P
int _printf(const char *format, ...)
{
	int i = 0, j = 0, k = 0, c = 0;
	va_list args;
	int tmp;
	unsigned int utmp;
	char *buf, *numStr;
	char b[20];

	while (format[c++]);

	buf = malloc(sizeof(char) * (c * 2));
	if (buf == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				tmp = va_arg(args, int);
				numStr = format_int(tmp, b);

				for (j = 0; numStr[j] != '\0'; j++)
				{
					buf[k++] = numStr[j];
				}
				i += 2;
			}
			else if (format[i + 1] == 'u')
			{
				utmp = va_arg(args, unsigned int);
				numStr = format_uns_int(utmp, b);

				for (j = 0; numStr[j] != '\0'; j++)
				{
					buf[k++] = numStr[j];
				}
				i += 2;
			}
		}

		buf[k++] = format[i];
	}

	va_end(args);
	buf[k] = '\0';
	c = 0;
	i = 0;
	while (buf[i++])
		c++;

	write (1, buf, c);

	free(buf);
	return (c);
}

char *format_int(int n, char b[])
{

	int i = 0, c = 0, c1 = 0;
	int n1 = n;
	int isNeg = 0;
	char tmp;

	if (n < 0)
	{
			isNeg = 1;
			n1 = -n;
	}

	while (1)
	{
		if ((n1 / 10) == 0)
		{
			b[i++] = (n1 + '0');
			break;
		}
		b[i++] = (n1 % 10) + '0';
		n1 = n1 / 10;
	}
	if (isNeg == 1)
		b[i++] = '-';
	b[i] = '\0';
	i = 0;
	while (b[++c]);

	c1 = c - 1;

	for (i = 0; i < c/2; i++)
	{
		tmp = b[i];
		b[i] = b[c1];
		b[c1--] = tmp;
	}
	b[c] = '\0';

	return (b);

}

char *format_uns_int(unsigned int n, char b[])
{

	unsigned int i = 0, c = 0, c1 = 0;
	unsigned int n1 = n;
	char tmp;

	while (1)
	{
		if ((n1 / 10) == 0)
		{
			b[i++] = (n1 + '0');
			break;
		}
		b[i++] = (n1 % 10) + '0';
		n1 = n1 / 10;
	}

	b[i] = '\0';
	i = 0;
	while (b[++c]);

	c1 = c - 1;

	for (i = 0; i < c/2; i++)
	{
		tmp = b[i];
		b[i] = b[c1];
		b[c1--] = tmp;
	}
	b[c] = '\0';

	return (b);

}

void _putchar(char c)
{
	write(1, &c, 1);
}
#endif
