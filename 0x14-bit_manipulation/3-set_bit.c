#include "main.h"

/**
 * set_bit - A bit is set to a given number
 * @n: locates the changed numbers
 * @index: sets the index number to bit 1
 *
 * return: success one .-1 failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
