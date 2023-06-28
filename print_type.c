#include "main.h"
#include <stdio.h>

/**
 * print_type - calls function with appropriate format spec
 *
 * @spec: data type spec
 * @ap: va_list
 * @pos: position of character
 * Return: returns 0 if successful
 */

int print_type(char spec, va_list ap, int *pos)
{
	int x = 0;

	def ptr[] = {
		{'c', print_char},
		{'s', print_s},
		{'%', print_perc},
		{'d', print_int},
		{'i', print_int}
	};

	while (ptr[x].spec)
	{
		if (spec == ptr[x].spec)
		{
			*pos += 1;
			return (ptr[x].func(ap));
		}
		x++;
	}

	if (spec == '\0')
	{
		return (-1);
	}

	return (ptr[2].func(ap));
}
