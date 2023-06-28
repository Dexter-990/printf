#include "main.h"

/**
 * _putchar - prints c
 *
 * @c: param
 * Return: byte printed if success -1 if failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
