#include <strdarg.h>
#include <uinstd.h>

/**
 * _printf - prints string to standard output
 * @str: the string to be printed
 *
 * Return: number of printed bytes
 */
int _printf(char *str, ...)
{
	int nBytes, i;

	if (*str == '\0')
		return (0);
	nBytes = 0;
	i = 0;
	while (str[i] != '\0')
	{
		nBytes += write(1, &str[i], 1);
	}
	return (nBytes);
}
