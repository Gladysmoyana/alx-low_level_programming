#include "main.h"

/**
 * set_bit - A bit is set to a given number
 * @n: locates the changed numbers
 * @index: sets the index number to bit 1
 *
 * return:1 for success, -1 failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
