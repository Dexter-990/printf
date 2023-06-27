#include "main.h"

/**
 * print_s - prints string
 *
 * @ap: variable summoner
 * Return: returns bytes printed
 */

int print_s(va_list ap)
{
	char *s = va_arg(ap, char *), *nul = "(nil)";
	int x, count = 0;

	if (s == NULL)
	{
		for (x = 0; *(s + x); x++)
		{
			write(1, &nul, 1);
			count++;
		}
		return (count);

	}
	for (x = 0; *(s + x); x++)
	{
		write(1, &s[x], 1);
		count++;
	}
	return (count);
}
