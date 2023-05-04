#include "main.h"
/**
 * get_bit - it's returns the value of a bit in index in decimal n
 * @n: help  to search
 * @index:  it'sindex of the bit
 *
 * Return: only value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*make this variables to receive value */
	int v_bit;

	if (index > 63)
		/*return-1 that mean d*/
		return (-1);

	v_bit = (n >> index) & 1;

	return (v_bit);
}
