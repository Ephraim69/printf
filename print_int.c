#include "main.h"

/**
* print_int - prints an integer
* @format: the argument with the string to be printed and any format specifier
* @args: the argument containing an int
* @i: the index of %d or %i in format, i.e. format[i]
* Return: returns the number of characters printed
*/
int print_int(const char *format, va_list args, int i)
{
	int n = va_arg(args, int);
	int j = 0, c = 0, n1 = n, isNeg = 0;
	char b[20];
	int len = 0;

	(void) format;
	(void) i;

	if (n < 0)
	{
		isNeg = 1;
		n1 = -n;
	}

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

	if (isNeg == 1)
		b[j++] = '-';
	b[j] = '\0';

	while (b[++c])
		j = 0;

	for (j = c - 1; j >= 0; j--)
		len += _putchar(b[j], len);

	return (len);
}
