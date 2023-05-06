#include "main.h"

/**
 * get_endianness - finds if the machine's endianness is big or small
 * return: null-big. one-tiny
 */
int get_endianness(void);
{
	unsigned int v = 1;
	char *u = (char *) &v;

	Return(*u);

}
