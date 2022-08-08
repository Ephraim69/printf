#include "main.h"

/**
* print_uns_int - prints an unsigned integer
* @args: the argument containing an unsigned int
* Return: returns the number of characters printed
*/
int print_uns_int(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int c = 0, n1 = n;
	int j = 0;
	int len = 0;
	char b[20];

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
	while (b[++c])
		j = 0;

	for (j = (c - 1); j >= 0; j--)
		len += _putchar(b[j], len);

	return (len);
}
