#include "main.h"
int print_int(va_list arg);
int print_d(int dec);

/**
 * print_int - prints an integer
 * @arg: the integer argument
 * Description - function prints a integer argument
 * Return: int
 */
int print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int num, digit, i;
	int count = 1;
	int l_digit = n % 10;
	int exp = 1;

	n = n / 10;
	num = n;

	if (l_digit < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		l_digit = -l_digit;
		count++;
	}
	if (num > 0)
	{
		for (i = 0; num / 10 > i; exp *= 10, num /= 10)
			;
		num = n;
		for (i = 0; exp > i; exp = exp / 10, count++)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
		}
	}
	_putchar(l_digit + '0');

	return (count);
}
