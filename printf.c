#include "main.h"

int (*get_format_func(const char *format, int i))(const char *, va_list, int);

/**
* _printf - a function that prints formated output to stdout
* @format: the argument with the string to be printed and any format specifier
* Return: returns the number of character printed
*/
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;
	int (*ptr)(const char *, va_list, int);

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			ptr = get_format_func(format, i);
			if (ptr == NULL)
			{
				_putchar('%', len);
				continue;
			}
			len += ptr(format, args, i);
			va_arg(args, void *);
			i += 2;
		}

		len += _putchar(format[i], len);
	}

	va_end(args);

	return (len);
}