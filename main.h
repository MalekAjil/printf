#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_s(char *str);
int print_d(int dec);
int print_i(int i);
int print_u(unsigned int ui);
int print_o(unsigned int oct);
int print_x(unsigned int hex, short upper);
int print_p(void *ptr);

#endif /* MAIN_H */
