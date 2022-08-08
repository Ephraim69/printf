#include "main.h"

/**
* print_uns_int - prints an unsigned integer
* @format: the argument with the string to be printed and any format specifier
* @args: the argument containing an unsigned int
* @i: the index of %u in format, i.e. format[i]
*/
int print_uns_int(const char *format, va_list args, int i)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int c = 0, n1 = n;
	int j = 0;
	int len = 0;
	char b[20];

	(void) format;
	(void) i;

	while (1)
	{
		if ((n1 / 10) == 0)
		{
			b[j++] = (n1 + '0');
			break;
		}
		b[j++] = (n1 % 10) + '0';
		n1 = n1 / 10;
	}

	b[j] = '\0';
	while (b[++c]);

	for (j = (c - 1); j >= 0; j--)
		len += _putchar(b[j], len);

	return (len);
}