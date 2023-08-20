#include "main.h"

/**
 * print_int - prints an integer
 * @arg: the integer argument
 * Description - function prints a integer argument
 * Return: int
 */
int print_int(va_list arg)
{
	int n = 0;

	n = print_d(va_arg(arg, int));
	return (n);
}

/**
 * print_d - print decimal
 * @dec: decimal number
 * Return: number of printed bytes
 */
int print_d(int dec)
{
	int n = 0;

	if (dec < 0)
	{
		n += _putchar('-');
		dec *= -1;
	}
	if (dec / 10)
		n += print_d(dec / 10);
	n += _putchar('0' + dec % 10);
	return (n);
}
