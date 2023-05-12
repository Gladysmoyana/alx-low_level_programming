#include "main.h"

/**
 * print_binary-equivalent binary of a decimal number printed
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int u, count = 0;
	unsigned long int current;

	for (u = 63; u >= 0; u--)
	{
		current = n >> u;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
