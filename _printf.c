#include "main.h"

int print(const char *format, va_list arg);
int _printf(const char *format, ...);
/**
 * prints - function that prints arguments
 * @format: the string
 *
 * Description - this function links operators to actions
 * Return: string length
 */
int (*prints(const char *format)) (va_list)
{
	unsigned int i = 0;

	merge mrg[] = {
		{'c', print_char},
		{'s', print_string},
		{'S', print_S},
		{'r', print_reverse},
		{'R', print_rot13},
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

	while (mrg[i].c)
	{
		if (mrg[i].c[0] == (*format))
			return (mrg[i].ptr);
		i++;
	}
	return (NULL);
}

/**
 * _printf - prints characters and strings
 * @format: the operators and string to be printed
 * Description - this function prints a string and chars
 * Return: the string length or -1
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int (*f)(va_list);
	unsigned int i = 0, count = 0;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		if (format[i] == '\0')
			return (count);
		f = prints(&format[i + 1]);
		if (f != NULL)
		{
			count += f(arg);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(arg);
	return (count);
}
