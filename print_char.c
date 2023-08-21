#include "main.h"

/**
 * print_char - prints a char
 * @arg: the character argument
 * Description - function prints a character argument
 * Return: 1
 */
int print_char(va_list arg)
{
	int n = va_arg(arg, int);

	return (write(1, &n, 1));
}
