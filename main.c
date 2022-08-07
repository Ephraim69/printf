#include <limits.h>
#include <stdio.h>
#include "main.h"

#define STEP 12

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
#if STEP >= 1
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
#endif
#if STEP >= 2
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
#endif
#if STEP >= 3
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
#endif
#if STEP >= 4
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
#endif
#if STEP >= 5
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
#endif
#if STEP >= 6
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
#endif
#if STEP >= 7
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
#endif
#if STEP >= 8
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
#endif
#if STEP >= 9
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
#endif
#if STEP >= 10
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
#endif
#if STEP >= 11
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
#endif
#if STEP >= 12
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
#endif
   return (0);
}
