#include "main.h"
/**
 * binary_to_uint - it's converts a binary number to unsigned int
 * @b: it's string that containing the binary number
 *
 * Return: it's a converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int dc_v = 0;

	if (!b)
		return (0);

	for (v = 0; b[v]; v++)
	{
		if (b[v] < '0' || b[v] > '1')
			return (0);
		/*stop here not go more */
		dc_v = 2 * dc_v + (b[v] - '0');
	}
	/*end here*/
	return (dc_v);
}
