#include "main.h"
int print_unsigned(va_list arg);
int print_u(unsigned int num);

/**
 * print_unsigned - prints an unsigned int number
 * @arg: the unsigned integer argument
 * Return: number of printed charachters
 */
int print_unsigned(va_list arg)
{
	return (print_u(va_arg(arg, unsigned int)));
}

/**
 * print_u - prints an unsigned int
 * @num: the number
 * Return: number of printed bytes
 */
int print_u(unsigned int num)
{
	int n = 0;

	if (num / 10)
		n += print_u(num / 10);
	n += _putchar('0' + num % 10);
	return (n);
}
