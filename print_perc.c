#include "main.h"

/**
 * print_perc - prints percent sign
 * @ap: va_list
 * Return: returns 1
 */

int print_perc(va_list ap __attribute__((unused)))
{
	char c = '%';

	write(1, &c, 1);
	return (1);
}
