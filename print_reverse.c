#include "main.h"

/**
 * print_reverse - prints reversed string
 * @arg: string to be printed
 *
 * Return: number of printed bytes
 */
int print_reverse(va_list arg)
{
	int i, n = 0;
	char *a = va_arg(arg, char *);

	if (a)
	{
		for (i = 0; *a; a++)
			i++;
		a--;
		for (; i > 0; i--, a--)
			n += _putchar(*a);
	}
	return (n);
}
