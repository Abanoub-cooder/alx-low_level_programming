#include "main.h"
/**
 * set_bit - it's sets a bit in a given index to 1 to us 
 * @n: paramenter pointer to the number to change
 * @index: it's index of the bit to set to 1 like first 
 *
 * Return: only 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
/*finish here */

	*n = ((1UL << index) | *n);
	/*or finih here where -1mean stop*/
    return (1);
}
