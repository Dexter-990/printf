#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - produces output according to a format
 *
 * @format: param string
 * Return: the number of characters
 * printed (excluding the null byte used to end output to strings)
 */


int _printf(const char *format, ...)
{
	unsigned int x = 0;
	va_list ap;
	int n, count = 0;

	va_start(ap, format);
	while (format && format[x])
	{
		if (format[x] == '%')

		{
			_switch(format, x, ap, n, count);
			x++;
		}
		else
		{
			n = write(1, &format[x], 1);
			if (n > -1)
				count++;
		}
		x++;
	}
	va_end(ap);
	return (count);
}

/**
 *_switch - uses switch call
 *
 *@format: string
 *@x: integer
 *@ap: va_list pointer
 *@n: integer
 *@count: number of bytes of the string printed
 */

void _switch(const char *format, unsigned int x, va_list ap, int n, int count)
{
	char *str, ch;

	switch (format[++x])
	{
		case 'c':
			ch = va_arg(ap, int);
			n = write(1, &ch, 1);
			if (n > -1)
				count += 1;
			return;
		case 's':
			str = va_arg(ap, char *);
			if (str != 0)
			{
				count += strlen(str);
				_puts(str);
			}
			return;
		case '%':
			str = "%";
			_puts(str);
			return;
		default:
			str = "%";
			_puts(str);
			write(1, &format[x], 1);
	}
}
