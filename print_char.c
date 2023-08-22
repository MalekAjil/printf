#include "main.h"

/**
 * print_char - prints a char
 * @arg: the character argument
 * Description - function prints a character argument
 * Return: 1
 */
int print_char(va_list arg)
{
	char n = va_arg(arg, int);

	_putchar(n);
	return (1);
}
