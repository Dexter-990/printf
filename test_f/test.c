#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	int len;

	len = _printf(NULL);
	len = printf(NULL);
	_printf("%d\n", len);
	printf("%d\n", len);
	return (0);
}
