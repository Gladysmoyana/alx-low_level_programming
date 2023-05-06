#include "main.h"

/**
 * get_bit - The value if a decimal number is returned
 * @n: Searching of the number of a bit
 * @index: The number index of a bit
 *
 * Return: The value of a bit is returned
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (undex > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
