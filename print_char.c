#include "main.h"

/**
 * print_char - prints character
 *
 * @ap: character
 *
 * Return: number of bytes printed
 */

int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	write(1, &c, 1);
	return (1);
}
