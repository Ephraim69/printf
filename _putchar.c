#include "main.h"

/**
* _putchar - prints a single character to stdout and increments len by 1
* @c: the character to be printed
* @len: will be used in the calling function to determine how many characters
* were printed
* Return: returns len (1)
*/
int _putchar(char c, int len)
{
	len = 0;

	write(1, &c, 1);
	len++;
	return (len);
}
