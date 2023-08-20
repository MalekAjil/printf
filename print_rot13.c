#include "main.h"

/**
 * print_rot13 - prints a string rotated 13 character
 * @arg: string to be printed
 * 
 * Return: number of printed bytes
 */
int print_rot13(va_list arg)
{
	int i = 0, n = 0;
	char c;
	char *a = va_arg(arg, char *);

	if (a == NULL)
	{
		write(1, "(null)", 6);
		return (-8);
	}
	while (a[i] != '\0')
	{
		if (a[i] > 96 && a[i] < 123)
			c = ((a[i] + 13) % 97) + 97;
		else if (a[i] > 64 && a[i] < 91)
			c = ((a[i] + 13) % 65) + 65;
		write(1, &c, 1);
		n++;		
		i++;
	}
	return (n);
}
