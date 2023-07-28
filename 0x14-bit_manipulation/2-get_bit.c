#include "main.h"
/**
 * get_bit - gives the bit at a specific index.
 * @n: the number
 * @index: the index
 * Return: the bit at the index or -1 if fails
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 1;

	bit = (bit << (index));
	if (n & bit)
		return (1);
	else
		return (0);

}
