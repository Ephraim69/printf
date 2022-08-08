#include "main.h"

/**
* print_string - prints a string
* @args: the argument containing a string
* Return: returns the number of characters printed
*/
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int len = 0, j = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		len += _putchar(s[j], len);
	}

	return (len);
}
