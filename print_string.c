#include "main.h"

/**
 * print_string - prints a string
 * @arg: string to be printed
 * Description - this function print a string argument
 * Return: int
 */
int print_string(va_list arg)
{
	int n = 0;
	char *a = va_arg(arg, char *);

	if (a == NULL)
	{
		return (write(1, "(null)", 6));
	}
	while (*a != '\0')
	{
		n += write(1, a, 1);
		a++;
	}
	return (n);
}
