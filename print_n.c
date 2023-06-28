#include "main.h"

/**
 * print_n - prints an int using recursion
 *
 * @num: number to be printed
 * Return: returns bytes printed
 */

int print_n(int num)
{
	static int count;

	if (num < 0)
	{
		_putchar('-');
		print_n(-(num / 10));
		_putchar('0' - (num % 10));
		count++;
	}
	else
	{
		if (num / 10)
		{
			print_n(num / 10);
		}
		_putchar((num % 10) + '0');
		count++;
	}
	return (count + 1);
}

