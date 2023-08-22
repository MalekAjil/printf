#include "main.h"

/**
 * print_rot13 - prints a string rotated 13 character
 * @arg: string to be printed
 *
 * Return: number of printed bytes
 */
int print_rot13(va_list arg)
{
	int n = 0;
	char c;
	char *a = va_arg(arg, char *);

	if (a == NULL)
	{
		return (write(1, "(null)", 6));
	}
	while (*a != '\0')
	{
		c = *a;
		if (c > 96 && c < 123)
		{
			if (c + 13 > 122)
				c -= 13;
			else
				c += 13;
		}
		else if (c > 64 && c < 91)
		{
			if (c + 13 > 90)
				c -= 13;
			else
				c += 13;
		}
		n += write(1, &c, 1);
		a++;
	}
	return (n);
}
