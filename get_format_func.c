#include "main.h"

int (*get_format_func(const char *format, int i))(const char *, va_list, int)
{
	int (*int_ptr)(const char *, va_list, int) = print_int;

	if (format[i + 1] == 'd' || format[i + 1] == 'i')
		return (int_ptr);
}