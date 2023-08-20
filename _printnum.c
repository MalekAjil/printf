#include "main.h"

/**
 * print_d - print decimal
 * @dec: decimal number
 * Return: number of printed bytes
 */
int print_d(int dec)
{
	int n;

	n = 0;
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

/**
 * print_i - print number by detected base
 * @i: the number (base: decimal, octal, hexa)
 * Return: number of printed bytes
 */
int print_i(int i)
{
	int n;

	n = 0;
	if (i / 10)
		n += print_d(i / 10);
	n += _putchar('0' + i % 10);
	return (n);
}

/**
 * print_u - prints unsigned integer
 * @ui: unsigned integer
 * Return: number of printed bytes
 */
int print_u(unsigned int ui)
{
	int n;

	n = 0;
	if (ui / 10)
		n += print_d(ui / 10);
	n += _putchar('0' + ui % 10);
	return (n);
}

/**
 * print_o - prints octal numbrer
 * @oct: octal number
 * Return: number of printed bytes
 */
int print_o(unsigned int oct)
{
	int n;

	n = 0;
	if (oct / 8)
		n += print_d(oct / 8);
	n += _putchar('0' + oct % 8);
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
