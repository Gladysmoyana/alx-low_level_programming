#include "main.h"

/**
 * bi_to_uint-converts a binary to unsigned int
 * unsigned int.
 * @b: binary number string
 *
 * Return: unsi converted number 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int in;
	int len, base_two;

	if (!n)
		return (0);

	in = 0;

	for (len = 0; n[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (n[len] != '0' && n[len] != '1')
		{
			return (0);
		}

		if (n[len] & 1)
		{
			ui += base_two;
		}
	}

	return (in);
}

