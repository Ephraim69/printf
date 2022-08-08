#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int print_string(va_list args);
int print_char(va_list args);
int _putchar(char c, int len);
int _printf(const char *format, ...);
int print_int(va_list args);
int print_uns_int(va_list args);
int (*get_format_func(const char *format, int i))(va_list);

#endif /* MAIN_H */
