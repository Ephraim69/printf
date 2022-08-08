#include "main.h"

int format_int(int n, char b[], int len);
int format_uns_int(unsigned int n, char b[], int len);
int _putchar(char c, int len);
int (*get_format_func(const char *format, int i))(const char *, va_list, int);

int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;
	int tmp;
	unsigned int utmp;
	char b[20];

	int (*ptr)(const char *, va_list, int);

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			ptr = get_format_func(format, i);
			len += ptr(format, args, i);
			i += 2;
		}

		len += _putchar(format[i], len);
	}

	va_end(args);

	return (len);
}

int format_int(int n, char b[], int len)
{

	int i = 0, c = 0, n1 = n, isNeg = 0;

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

	while (b[++c]);

	for (i = c - 1; i >= 0; i--)
		len += _putchar(b[i], len);

	return (len);
}

int format_uns_int(unsigned int n, char b[], int len)
{

	unsigned int c = 0, n1 = n, c1 = 0, tmp = 0;
	int i = 0;
	len = 0;

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
	while (b[++c]);

	for (i = (c - 1); i >= 0; i--)
		len += _putchar(b[i], len);

	return (len);
}

int _putchar(char c, int len)
{
	len = 0;

	write(1, &c, 1);
	len++;
	return (len);
}
