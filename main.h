#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 1024
/**
 * struct merging - struct for pairing format to fuctions
 *
 * @c: the operator
 * @ptr: the fuction associated
 */
typedef struct merging
{
	char c;
	int (*ptr)();
} merge;

int _printf(const char *const format, ...);

int print_char(va_list arg);
int print_string(va_list arg);
int print_S(va_list arg);
int print_reverse(va_list arg);
int print_rot13(va_list arg);
int print_percent(void);

int print_int(va_list arg);

int print_dec(va_list arg);
int print_d(int num);
int print_unsigned(va_list arg);
int print_u(unsigned int num);
int print_oct(va_list arg);
int print_o(unsigned int num);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_x(unsigned int num, short upper);
int print_bin(va_list arg);
int print_b(unsigned int num);

int print_pointer(va_list arg);


int _putchar(char c);
#endif /* MAIN_H */
