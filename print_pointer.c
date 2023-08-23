#include "main.h"
int print_hex_ptr(unsigned long int num);
int print_pointer(va_list arg);

/**
 * print_hex_ptr - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int print_hex_ptr(unsigned long int num)
{
	long int i, *array, counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
/**
 * print_pointer - prints an hexgecimal number.
 * @arg: arguments.
 * Return: counter.
 */
int print_pointer(va_list arg)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b, i;

	p = va_arg(arg, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_ptr(a);
	return (b + 2);
}
