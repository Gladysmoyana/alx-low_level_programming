#include "main.h"

/**
 * flip_bits - counts the number that changes to bit
 * one num to another
 * @n: number 1
 * @m: number 2
 *
 * Return: changed number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a > = 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count++;
	}

	Return(count);
}
