#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: 0 on success, error code otherwise
 *     */
int main(void)
{
		int len, len2;

			len = _printf("%d\n", -2147483648);
				len2 = printf("%d\n", -2147483648);
					fflush(stdout);
						if (len != len2)
								{
											printf("Lengths differ.\nlen = %d\nlen2 = %d\n", len, len2);
													fflush(stdout);
															return (1);
																}
							return (0);
}
