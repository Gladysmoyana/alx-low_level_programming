#include "main.h"

/**
 * bit_clear-sets value of given bit to 0
 * @x: points the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *x, unsigned int index)
{
	if (index > 63)
		return (-1);

	*x = (~(1UL << index) & *x);
	return (1);
}

