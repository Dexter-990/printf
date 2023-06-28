#include "main.h"
#include <unistd.h>
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
	int x = 0;
	va_list ap;
	int count = 0, byte = 0;

	va_start(ap, format);

	if (format == NULL)
		return (-1);
	while (format[x])
	{
		if (format[x] == '%')

		{
			byte = print_type(format[x + 1], ap, &x);
			if (byte == -1)
				return (-1);
			count += byte;
		}
		else
		{
			write(1, &format[x], 1);
			count++;
		}
		x++;
	}
	va_end(ap);
	return (count);
}

