#include "main.h"

/**
 * print_int - prints integer
 *
 * @ap: integer
 * Return: returns number of bytes
 */

int print_int(va_list ap)
{
	int number = va_arg(ap, int);
	int count = 0;

	count = print_n(number);
	return (count);
}
