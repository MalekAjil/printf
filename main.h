#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

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
int print_percent(void);
int print_int();

#endif /* MAIN_H */
