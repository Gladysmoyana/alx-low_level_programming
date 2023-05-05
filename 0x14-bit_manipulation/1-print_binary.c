#include "main.h"

/**
 * print_binary - binary equivalent to a decimal num is printed
 * @n: to print the num in binary
 */
void print_binary(unsigned long int n)
{
	int n, count = 0
	unsigned long int current;

	for (n = 63; n > = 0; n--)

	{
		current = n >> n;

		if (current & 1)
		{
			_putcher('1');
			count++;
		}
		if (!count)
			_putchar('0');
	}
