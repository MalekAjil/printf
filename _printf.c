#include "main.h"

int print(const char *format, va_list arg);
int _printf(const char *format, ...);
/**
 * printy - function that prints arguments
 * @format: the string
 * @arg: the arguments
 * Description - this function links operators to actions
 * Return: string length
 */
int print(const char *format, va_list arg)
{
	int i = 0, n = 0, add = 0, a = 0;

	pair pai[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}};

	while (format != NULL && format[a] != '\0')
	{
		n = 0;
		add = 0;
		if (format[a] == '%')
		{
			a++;
			while (pai[n].c != '\0')
			{
				if (format[a] == pai[n].c)
				{
					add = pai[n].ptr(arg);
					i += add;
				}
				n++;
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
	va_list arg;
	int i;

	if (format == NULL)
		return (0);
	va_start(arg, format);
	if (format == NULL && *format == '\0')
		return (-1);
	i = printy(format, arg);
	va_end(arg);
	return (i);
}
