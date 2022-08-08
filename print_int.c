#include "main.h"

int print_int(const char *format, va_list args, int i)
{
	int n = va_arg(args, int);
	int j = 0, c = 0, n1 = n, isNeg = 0;
	char b[20];

	int len = 0;

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

	while (b[++c]);

	for (j = c - 1; j >= 0; j--)
		len += _putchar(b[j], len);

	return (len);
}