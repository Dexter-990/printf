#include "main.h"

/**
 * _strlen - finds length of a string
 *
 * @s: string
 * Return: returns length of the string
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x]; x++);

	return (x);
}
