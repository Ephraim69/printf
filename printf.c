#include "main.h"

#define P
void print_num(int n);
void _putchar(char c);
#ifdef M
int main(void)
{
	write(1, "Hello, World!\n", 14);	
}
#endif

#ifdef P
int _printf(const char *format, ...)
{
	int i = 0, c = 0;
	va_list args;
	int tmp;

	while (format[c++]);

	va_start(args, format);	
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				tmp = va_arg(args, int);
				print_num(tmp);
				continue;	
			}
		}
		if (format[i - 1] == '%')
			continue;
		_putchar(format[i]);
	}


	write (1, format, c);

	return (c);
}

void print_num(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}
	else
	{
		print_num(n / 10);
		_putchar((n % 10) + '0');
	}
}

void _putchar(char c)
{
	write(1, &c, 1);
}
#endif
