#include "main.h"
#include <stdio.h>
/**
 * clear_bit - A given bit of 0 is given to the set value
 * @n: point to the number that has changed
 * @ndex: clears the bit index
 *
 * returns: success and failure 1, -1 respectively
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
