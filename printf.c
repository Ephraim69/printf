#include "main.h"

int format_int(int n, char b[], int len);
char *format_uns_int(unsigned int n, char b[]);
int _putchar(char c, int len);

int _printf(const char *format, ...)
{
	int i = 0, j = 0, k = 0, c = 0, len = 0;
	va_list args;
	int tmp;
	unsigned int utmp;
	char b[20];

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				tmp = va_arg(args, int);
				len += format_int(tmp, b, len);
				i += 2;
			}
		/*	else if (format[i + 1] == 'u')
			{
				utmp = va_arg(args, unsigned int);
				numStr = format_uns_int(utmp, b);

				for (j = 0; numStr[j] != '\0'; j++)
				{
					buf[k++] = numStr[j];
				}
				i += 2;
			}	*/
		}

		len += _putchar(format[i], len);
	}

	va_end(args);

	return (len);
}

int format_int(int n, char b[], int len)
{

	int i = 0, c = 0, c1 = 0;
	int n1 = n;
	int isNeg = 0;
	char tmp;
	len = 0;

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

	for (i = 0; b[i] != '\0'; i++)
		len += _putchar(b[i], len);
	return (len);

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

int _putchar(char c, int len)
{
	len = 0;

	write(1, &c, 1);
	len++;
	return (len);
}
