#include "main.h"

/**
 * print_S - prints special string
 * @arg: string to be printed
 * Return: number of printed bytes
 */
int print_S(va_list arg)
{
	int n = 0;
	char *a = va_arg(arg, char *);

	if (a == NULL)
	{
		return (write(1, "(null)", 6));
	}
	while (*a != '\0')
	{
		if (*a < 32 || *a > 126)
		{
			n += write(1, "\\x", 2);
			if (*a < 16)
				n += write(1, "0", 1);
			n += print_x(*a, 1);
		}
		else
			n += write(1, a, 1);
		a++;
	}
	return (n);
}
