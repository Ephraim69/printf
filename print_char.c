#include "main.h"

/**
* print_char - prints a single character
* @format: the argument with the string to be printed and any format specifier
* @args: the argument containing a char
* @i: the index of %c in format, i.e. format[i]
*/
int print_char(const char *format, va_list args, int i)
{
	char c = va_arg(args, int);
	int len = 0;

	(void) format;
	(void) i;

	len += _putchar(c, len);

	return (len);
}