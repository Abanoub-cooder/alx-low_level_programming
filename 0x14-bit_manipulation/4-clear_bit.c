#include "main.h"
/**
 * clear_bit - is's sets the value of a given bit to 0and clear
 * @n: argument pointer to the number to change
 * @index: it's help index of the bit to clear
 *
 * Return: only 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	/*here it will return 1*/
	return (1);
}
