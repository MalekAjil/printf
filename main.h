#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
* struct pairing - struct for pairing format to fuctions
*
* @a: the operator
* @ptr: the fuction associated
*/
typedef struct pairing
{
	char c;
	int (*ptr)();
} pair;

int _printf(const char *const format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(void);
int print_int(va_list arg);

#endif /* MAIN_H */
