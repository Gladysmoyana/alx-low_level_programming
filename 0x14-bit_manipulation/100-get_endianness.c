#include "main.h"
#include <stdint.h>
/**
 * get_endianness - finds if the machine's endianness is big or small
 *
 * Return: 0 if big endianness, 1 if little endianness
 */
int get_endianness(void)
{
	unsigned int v = 1;
	char *u = (char *) &v;

	Return(*u);

}
