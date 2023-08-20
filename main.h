#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
#endif /* MAIN_H */

#ifndef putchr
#define putchr
int _putchar(char c);
#endif

#ifndef prints
#define prints
int print_s(char *str);
#endif


#ifndef printd
#define printd
int print_d(int dec);
#endif

#ifndef printi
#define printi
int print_i(int i);
#endif

#ifndef printu
#define printu
int print_u(unsigned int ui);
#endif

#ifndef printo
#define printo
int print_o(unsigned int oct);
#endif

#ifndef printx
#define printx
int print_x(unsigned int hex, short upper);
#endif

#ifndef printp
#define printp
int print_p(void *ptr);
#endif
