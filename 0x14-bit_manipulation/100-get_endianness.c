#include "main.h"

/**
 * get_endianness - checks the endianness
 * @gee
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianess(void)
{
	unsigned int g;
	char *l;

	g = 1;
	l = (char *) &g;

	return ((int)*l);
}
