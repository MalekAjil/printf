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

	if (a == NULL)
	{
		write(1, "(null)", 6);
		return (-8);
	}
	while (*a != '\0')
	{
		a++;
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		write(1, &a[i], 1);
		n++;
	}
	return (n);
}
