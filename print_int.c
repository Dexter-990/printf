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
	char *ptr = malloc(sizeof(char) * 100);
	int x = 0, isneg = 0, count = 0;

	if (ptr != NULL)
	{
		if (number < 0)
		{
			isneg = 1;
			number = -number;
		}

		do {
			ptr[x++] = '0' + (number % 10);
			number /= 10;
		} while (number > 0);

		if (isneg)
			ptr[x++] = '-';

		while (x > 0)
		{
			write(1, &ptr[--x], 1);
			count++;
		}
		free(ptr);
		return (count);
	}
	free(ptr);
	return (count);
}
