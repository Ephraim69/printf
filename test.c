#include <stdio.h>
#include <unistd.h>

int print_num(int n, int len);
int _putchar(char c, int len);

int main(void)
{
	int len = 0;

	print_num(-27898758, len);
}

int print_num(int n, int len)
{
	int n1;

	len = 0;
	n1 = n;

	if (n < 0)
	{
		len += _putchar('-', len);
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
		return ()
	}
	len += _putchar((n1 % 10) + '0', len);
}

int _putchar(char c, int len)
{
	len = 0;
	write(1, &c, 1);
	len++;
	return (len);
}