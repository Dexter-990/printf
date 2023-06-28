#include <stdio.h>

void print_num(int num);

void print_num(int num)
{
	if (num < 0)
	{
		putchar('-');
		print_num(-(num / 10));
		putchar('0' - (num % 10));
	}
	else
	{
		if (num / 10)
			print_num(num / 10);
		putchar('0' + (num % 10));
	}
}

int main(void)
{
	print_num(-2147483648);
	return (0);
}
