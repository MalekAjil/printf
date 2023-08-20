#include "main.h"

/**
 * print_hex - prints a hexadecimal
 * @arg: the integer argument
 * Return: number of printed charachters
 */
int print_hex(va_list arg)
{
	int n = 0;

	n = print_x(va_arg(arg, unsigned int), 0);
	return (n);
}

/**
 * print_HEX - prints a hexadecimal in Uppercase
 * @arg: the integer argument
 * Return: number of printed charachters
 */
int print_HEX(va_list arg)
{
	int n = 0;

	n = print_x(va_arg(arg, unsigned int), 1);
	return (n);
}

/**
 * print_x - prints hexadecimal number
 * @hex: hexadecimal number
 * @upper: if x is uppercase
 * Return: number of printed bytes
 */
int print_x(unsigned int hex, short upper)
{
	int n, shift;

	shift = 32;
	if (upper)
		shift = 0;
	n = 0;
	if (hex / 16)
		n += print_x(hex / 16, upper);
	switch (hex % 16)
	{
		case 15:
			n += _putchar('F' + shift);
			break;
		case 14:
			n += _putchar('E' + shift);
			break;
		case 13:
			n += _putchar('D' + shift);
			break;
		case 12:
			n += _putchar('C' + shift);
			break;
		case 11:
			n += _putchar('B' + shift);
			break;
		case 10:
			n += _putchar('A' + shift);
			break;
		default:
			n += _putchar('0' + hex % 16);
			break;
	}
	return (n);
}
