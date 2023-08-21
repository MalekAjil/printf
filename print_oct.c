#include "main.h"
int print_oct(va_list arg);
int print_o(unsigned int num);

/**
 * print_oct - prints a binary
 * @arg: the integer argument
 * Return: number of printed charachters
 */
int print_oct(va_list arg)
{
	int n = 0;

	n = print_o(va_arg(arg, unsigned int));
	return (n);
}

/**
 * print_o - prints an octa number
 * @num: the number
 * Return: number of printed bytes
 */
int print_o(unsigned int num)
{
	int n = 0;

	if (num / 8)
		n += print_o(num / 8);
	n += _putchar('0' + num % 8);
	return (n);
}
