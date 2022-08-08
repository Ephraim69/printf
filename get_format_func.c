#include "main.h"

/**
* get_format_func - determines the appropriate function for any given format
* specifier
* @format: the argument with the string to be printed and any format specifier
* @i: the index of '%' in format, i.e. format[i]
* Return: returns a pointer to the right function
*/
int (*get_format_func(const char *format, int i))(va_list)
{
	int (*int_ptr)(va_list) = print_int;
	int (*uns_int_ptr)(va_list) = print_uns_int;
	int (*char_ptr)(va_list) = print_char;
	int (*str_ptr)(va_list) = print_string;

	if (format[i + 1] == 'd' || format[i + 1] == 'i')
		return (int_ptr);
	if (format[i + 1] == 'u')
		return (uns_int_ptr);
	if (format[i + 1] == 'c')
		return (char_ptr);
	if (format[i + 1] == 's')
		return (str_ptr);
	else
		return (NULL);
}
