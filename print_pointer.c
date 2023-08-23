#include "main.h"
char *print_hex_ptr(unsigned long int num);
int print_pointer(va_list arg);

/**
 * print_hex_ptr - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
char *print_hex_ptr(unsigned long int num)
{
	int base = 16;
	static char *rep;
	static char buff[50];
	char *p;

	rep = "0123456789abcdef";
	p = &buff[49];
	*p = '\0';
	do {
		*--p = rep[num % base];
		num /= base;
	} while (num != 0);

	return (p);
}
/**
 * print_pointer - prints an hexgecimal number.
 * @arg: arguments.
 * Return: counter.
 */
int print_pointer(va_list arg)
{
	char *p;
	char *s = "(nil)";
	unsigned long int a;
	int i = 0;

	a = va_arg(arg, unsigned long int);
	if (a == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}
	p = print_hex_ptr(a);
	_putchar('0');
	_putchar('x');
	for (i = 0; p[i] != '\0'; i++)
	{
		_putchar(p[i]);
	}
	return (i);
}
