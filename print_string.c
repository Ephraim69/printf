#include "main.h"

/**
* print_string - prints a string
* @format: the argument with the string to be printed and any format specifier
* @args: the argument containing a string
* @i: the index of %s in format, i.e. format[i]
*/
int print_string(const char *format, va_list args, int i)
{
	char *s = va_arg(args, char *);
	int len = 0, j = 0;

	(void) format;
	(void) i;

	for (j = 0; s[j] != '\0'; j++)
	{
		len += _putchar(s[j], len);
	}

	return (len);
}