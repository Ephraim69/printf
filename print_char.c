#include "main.h"

/**
* print_char - prints a single character
* @args: the argument containing a char
* Return: returns len (1)
*/
int print_char(va_list args)
{
	char c = va_arg(args, int);
	int len = 0;

	len += _putchar(c, len);

	return (len);
}
