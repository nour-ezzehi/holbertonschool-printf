#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char __attribute__ ((unused)) *s = "hello";
    char __attribute__ ((unused)) k = 'a';
    int __attribute__((unused)) len;
    int __attribute__((unused)) len2;
    unsigned int __attribute__((unused)) ui;
    void __attribute__((unused)) *addr;
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    len = _printf("%i\n");
    len2 = printf("%i\n");
    _printf("Length:[%i, %i]\n", len, len);
    _printf("Length:[%d, %d]\n", len, len);
    printf("Length:[%d, %d]\n", len2, len2);
    _printf("Negative:[%d]\n", INT_MIN);
    printf("Negative:[%d]\n", INT_MIN);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%b, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%b, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", NULL);
    printf("String:[%s]\n", NULL);
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len2);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
