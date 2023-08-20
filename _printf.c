#include "main.h"

int print(const char *format, va_list arg);
int _printf(const char *format, ...);
/**
 * prints - function that prints arguments
 * @format: the string
 * @arg: the arguments
 * Description - this function links operators to actions
 * Return: string length
 */
int prints(const char *format, va_list arg)
{
	int i = 0, n = 0, add = 0, a = 0;

	merge mrg[] = {
		{'c', print_char},
		{'s', print_string},
		{'S', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'b', print_bin},
		{'o', print_oct},
		{'x', print_hex},
		{'X', print_HEX},
		{'u', print_unsigned},
		/*{'p', print_pointer},*/
		{'\0', NULL}};

	while (format != NULL && format[a] != '\0')
	{
		n = 0;
		add = 0;
		if (format[a] == '%')
		{
			a++;
			while (mrg[n].c != '\0')
			{
				if (format[a] == mrg[n].c)
				{
					add = mrg[n].ptr(arg);
					i += add;
					break;
				}
				n++;
			}
			if (mrg[n].c == '\0')
			{
				write(1, &format[a - 1], 1);
				write(1, &format[a], 1);
				i += 2;
			}
		}
		else
		{
			i++;
			write(1, &format[a], 1);
		}
		a++;
	}
	return (i);
}

/**
 * _printf - prints characters and strings
 * @format: the operators and string to be printed
 * Description - this function prints a string and chars
 * Return: the string length or -1
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;

	if (format == NULL)
		return (0);
	va_start(args, format);
	if (format == NULL && *format == '\0')
		return (-1);
	i = prints(format, args);
	va_end(args);
	return (i);
}
