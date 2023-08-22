#include "main.h"

/**
 * print_string - prints a string
 * @arg: string to be printed
 * Description - this function print a string argument
 * Return: int
 */
int print_string(va_list arg)
{
	int n, len;
	char *a = va_arg(arg, char *);

	if (a == NULL)
	{
		a = "(null)";
		len = strlen(a);
		for (n = 0; n < len; n++)
			_putchar(a[n]);
		return (len);
	}
	else
	{
		len = strlen(a);
		for (n = 0; n < len; n++)
			_putchar(a[n]);
		return (len);
	}
}
