#include "main.h"
int print_bin(va_list arg);
int print_b(unsigned int num);

/**
 * print_bin - prints a binary
 * @arg: the integer argument
 * Return: number of printed charachters
 */
int print_bin(va_list arg)
{
	int n = 0;

	n = print_b(va_arg(arg, unsigned int));
	return (n);
}

/**
 * print_b - prints a binary
 * @num: the number
 * Return: number of printed bytes
 */
int print_b(unsigned int num)
{
	int n = 0;

	if (num / 2)
		n += print_b(num / 2);
	n += _putchar('0' + num % 2);
	return (n);
}
