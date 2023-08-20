#include "main.h"

/**
 * _printf - prints string to standard output
 * @format: the string to be printed
 *
 * Return: number of printed bytes
 */
int _printf(const char *format, ...)
{
	int nBytes, i;
	va_list args;

	if (*format == '\0')
		return (0);
	nBytes = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'd':
					nBytes += print_d(va_arg(args, int));
					break;
				case 'c':
					nBytes += _putchar(va_arg(args, int));
					break;
				case 's':
					nBytes += print_s(va_arg(args, char*));
					break;
				case '%':
					nBytes += _putchar('%');
					break;
				case 'i':
					nBytes += print_i(va_arg(args, int));
					break;
				case 'u':
					nBytes += print_u(va_arg(args, unsigned int));
					break;
				case 'o':
					nBytes += print_o(va_arg(args, int) * 10 / 8);
					break;
				case 'x':
					nBytes += print_x(va_arg(args, 	int), 0);
					break;
				case 'X':
					nBytes += print_x(va_arg(args, int), 1);
					break;
				/*case 'p':
					 nBytes += print_p(va_arg(args, void*));
					 break;*/
				default:
					nBytes += _putchar(format[i]);
					nBytes += _putchar(format[i + 1]);
					break;
			}
			i++;
		}
		else
			 nBytes += _putchar(format[i]);

		i++;
	}
	va_end(args);
	return (nBytes);
}

/**
 * print_s - prints string
 * @str: the string
 * Return: number of printed bytes
 */
int print_s(char *str)
{
	int i, n;

	n = 0;
	i = 0;
	while (str[i] != '\0')
	{
		n += _putchar(str[i]);
		i++;
	}
	return (n);
}

/**
 * print_p - prints pointer
 * @ptr: memory address
 * Return: number of printed bytes
 */
/*
int print_p(void *ptr)
{
	unsigned int p, n;

	n = 0;
	p = (unsigned int)ptr;
	n += _putchar('0');
	n += _putchar('x');
	n += print_x(p, 0);
	return (n);
}
*/
