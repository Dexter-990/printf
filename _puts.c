#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * _puts - writes the character c to stdout
 *
 * @c: character to point to
 * Return: returns the number of bytes written on success
 * on failure, returns -1
 */

int _puts(char *c)
{
	unsigned int x;

	for (x = 0; c[x]; x++)
		write(1, &c[x], 1);
	return (strlen(c));
}
