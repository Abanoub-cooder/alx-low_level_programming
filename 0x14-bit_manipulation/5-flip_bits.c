#include "main.h"
/**
 * flip_bits - it's counts the number of bits to change it
 * to get from one number to another
 * @n: it's first number
 * @m: it's second number
 *
 * Return: only number of bits to change it
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, con = 0;
	/*con= count, car=carrent exc- exclusive */
	unsigned long int car;
	unsigned long int exc = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		car = exc >> v;
		if (car & 1)
			con++;
	}
	/*return mean end of the progrm new con*/
	return (con);
}
