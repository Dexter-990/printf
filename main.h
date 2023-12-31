#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int _printf(const char *format, ...);
int print_s(va_list ap);
int print_char(va_list ap);
int print_perc(va_list ap);
int print_type(char spec, va_list ap, int *x);
int _putchar(char c);
int print_int(va_list ap);
int print_n(int n);

/**
 * struct pas - Short description
 * @spec: First member
 * @func: Second member
 *
 * Description: Longer description
 */
typedef struct pas
{
	char spec;
	int (*func)(va_list ap);
} def;
#endif
