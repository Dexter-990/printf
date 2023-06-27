#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _puts(char *c);
void _switch (const char *format, unsigned int x, va_list ap, int n, int count);
#endif
